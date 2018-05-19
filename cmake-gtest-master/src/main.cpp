# include <iostream>
# include <string>

using namespace std;

/*
//--------------------------------------------------------------------------------------------------
//V1 Kolejnosc tworzenia / niszczenia
struct A{
    std :: string a;
    A() : a {"asdf"}
    {std::cout << "Asdasd" <<std::endl; }

};

struct B: A{
    std::string a;
    std::string c;

    B(): c{"ala"}, A{}, a{"asd"}   // kolejnosc na liscie inicjalizacyjnej nie ma zadnego znaczenia
    {}                             // kolejnosc tworzenia zgodna z deklaracja (kolejnoscia) pol w klasie
};                                 // destruktory w odwrotnej kolejnosci
//--------------------------------------------------------------------------------------------------

// V2
struct A{
   virtual void f() const {}
   virtual ~A)() = default;
};

struct B : public A{
    void f() const override {}
};

void f(A a)                 // przekazanie przez wartosc dla obiektow polimorficznych SLICING
{                           // zawsze otrzymamy metode z klasy A - brak polimorfizmu
    a.f();
}                           // C++ semantyka wartosci

//--------------------------------------------------------------------------------------------------

int main()
{
    // V1

    B b;        // tworzenie A (A{}), potem a{"asd"}, c{"ala"}


    //V2

    B b;
    f(b);       // kopia typu A stworzona z klasy B   A a{b}; f(a); wywolany zostanie konstruktor kopiujacy klasy A


    return 0;
}
*/

/*
int main()
{
    return 0;
}

*/
