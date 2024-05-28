#include <iostream>
using namespace std;

// Kelas dasar
class orang {
public:
    int umur; // Atribut untuk menyimpan umur

    orang(int pUmur) :   // Konstruktor kelas orang
        umur(pUmur)
    {
        cout << "Orang dibuat dengan umur " << umur << "\n" << endl;
    }
};

// Kelas pekerja, mewarisi dari kelas orang
class pekerja : public orang {
public:

    pekerja(int pUmur) : // Konstruktor kelas pekerja
        orang(pUmur)
    {
        cout << "Pekerja dibuat\n " << endl;
    }
};

// Kelas pelajar, mewarisi dari kelas orang
class pelajar : public orang {
public:

    // Konstruktor kelas pelajar
    pelajar(int pUmur) :
        orang(pUmur)
    {
        cout << "Pelajar dibuat\n " << endl;
    }
};

int main()
{
}