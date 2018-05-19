#include <iostream>
#include <cstring>

class String
{
    char* buf;
public:
    String(const char* str): buf{new char[strlen(str) + 1]}
    {
        std::strcpy(buf, str);
    }

    /*
    // napisane recznie konstruktor kopiujacy
    String(const String& other): buf{other.buf}
    {}

    //napisany recznie operator przypisania
    String& operator= (const String& other)
    {
        buf = other.buf;
        return *this;
    }
    */

    // Prawidlowy konstruktor kopiujacy

    String(const String& other): buf{new char[std::strlen(other.buf)+1]}
    {
        std::strcpy(buf, other.buf);
    }

    /*
    // Konstruktor kopiujacy z uzyciem delegata
    String(const String& other): String {other.buf}
    {}
    */

    String& operator= (const String& other)
    {
        /* //V1
        if(this == &other)
            return *this;

        // najpierw usuwamy bufor
        delete[] buf;
        // kopiujemy do bufora nowy string
        buf = new char[std::strlen(other.buf)+1];
        std::strcpy (buf, other.buf);
        // zwracamy kopie
        return *this;
        */

        /* // V2
        // tutaj nie trzeba sprawdzac czy obiekt przypsuje do siebie bo odpowiednio pozamieniane sa operacje
        // kopiujemy do bufora nowy string
        char* temp = new char[std::strlen(other.buf)+1];
        // usuwamy bufor
        delete[] buf;
        // przypisujemy tymczasowy string do nowo stworzonego bufora w klasie z tymczasowego bufora
        buf = temp;
        std::strcpy (buf, other.buf);
        // zwracamy kopie
        return *this;
        */

        // V3 copy and swap
        String tmp{other};
        std::swap(buf, tmp.buf);
        return *this;

    }

    /*
    // V3 copy and swap przy przekazaniu przez wartosc (niepotrzebna kopia)
    String& operator= (String other)
    {
        std::swap(buf, tmp.buf);
        return *this;
    }
    */

    ~String() {
        delete buf;
    }
};

/*
int main()
{
    String a{"Ala"};
    String b{a};
    String c{"Kot"};
    c = a;
    //a = a; //!!!
}
*/
