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

int main()
{
}