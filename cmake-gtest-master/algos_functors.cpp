#include <algorithm>
#include <iterator>
#include <string>
#include <iostream>

struct Person {
    std::string name;
    int age;
};

template <typename Col>
void print(const Col& col) {
    for (const auto& item : col) {
        std::cout << item << " ";
    }
    std::cout << std::endl;
}


// FUNKTORY
//------------------------------------------
struct A
{
    int n=o;
    int operator()()
    {
        return n++;
    }

};

/*// V1
struct B
{
    int n;
    B(int n) :n(n) {}

    bool operator() (int a) const
    {
        return a<n;
    }
};*/

// V2
struct B
{
    bool operator() (int a, int b) const
    {
        return b<a;
    }
};

bool is_even(int a) {return a%2 == 0;}

void ex2() {
    // V1
    /*
    A a;
    for (int i = 0; i <3; ++i)
        std::cout<< a() <<std::endl;
    */

    // V2
    std::vector<int> v{4,2,8,7,5,1};
    print(v);


    B b;
    std::sort(v.begin(), v.end(), B{});          // idea w algorytmie sort jak we wzorcu strategia
    print(v);                               // bo chcemy posortowac, ale parametrami mozemy wybrac jak posortowac
}
//---------------------------------------------
// SITO ARYSTOTELESA ZROBIC TYLE ILE SIE DA ZA POMOCA BIBLIOTEKI ALGORYTHM
std::vector<int>primes(int n)
{
    std::vector<int> v(n-1);
    std::generate_n(v.begin(), n-1, [i=2]()mutable {return i++;});

    std::remove_if(v.begin(),v.end(), [i=2]()mutable {})


    return v;
}




//---------------------------------------------

void example() {
    int data[5] = {1, 2, 3, 4, 5};
    std::vector<int> vec{6, 6, 6, 6, 6, 6, 6, 6, 6};
    // fill vec with 7's instead, apart from first element
    std::fill(vec.begin() + 1, vec.end(), 7);

    // copy data[1],...,data[3] to vec[3],...,vec[5]
    std::copy(data + 1, data + 4, vec.begin() + 3);
    // vec = {6, 7, 7, 2, 3, 4, 7, 7, 7}
    print(vec);

    // append first 2 elemenst of data to vec
    std::copy_n(data, 2, std::back_inserter(vec));
    // vec = {6, 7, 7, 2, 3, 4, 7, 7, 7, 1, 2}
    print(vec);

    // How many 7's are there in vec?
    int sevens = std::count(vec.begin(), vec.end(), 7);
    std::cout << "# of 7's: " << sevens << std::endl;

    // Where is the first number less than 3?
    auto pos = std::find_if(vec.begin(), vec.end(), [](int n) { return n < 3; });
    int offset = std::distance(vec.begin(), pos);
    std::cout << "First <3 is element no. " << offset << " and it's " << *pos << std::endl;

    // Remove all 7's
    // Huge lie - std::remove doesn't remove anything! see docs
    auto end = std::remove(vec.begin(), vec.end(), 7);
    vec.erase(end, vec.end());
    print(vec);

    vec.clear(); // vec = {};
    // append all even elements of data to vec
    std::copy_if(std::begin(data), std::end(data), std::back_inserter(vec),
            [](int n) { return n % 2 == 0; });
    // vec = {2, 4}
    print(vec);

    // square elements of vec
    std::for_each(vec.begin(), vec.end(), [](int& n) { n = n * n; });

    // print vec to stdout
    std::copy(vec.begin(), vec.end(), std::ostream_iterator<int>{std::cout, ", "});
    std::cout << std::endl;

    // print 10 random numbers
    std::generate_n(std::ostream_iterator<int>{std::cout, ", "}, 10, std::rand);
    std::cout << std::endl;
}

int main() {
    example();
    print(primes(50));
}
