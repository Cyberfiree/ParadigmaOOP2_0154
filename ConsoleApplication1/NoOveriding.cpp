#include <iostream>
using namespace std;

//class parent
// tambahkan final sesudah nama class
// untuk mencegah adanya overriding

// Kelas dasar
class baseClass
{
public:
    virtual void perkenalan() // Fungsi virtual yang bisa dioverride oleh kelas turunan
    {
        cout << "Hallo saya function dari base class";
    }
};

// Kelas dasar
class baseClass
{
public:
    virtual void perkenalan() // Fungsi virtual yang bisa dioverride oleh kelas turunan
    {
        cout << "Hallo saya function dari base class";
    }
};

class derivedClass : public baseClass // Kelas turunan dari baseClass
{
public:
    void perkenalan() // Mengoverride fungsi perkenalan dari kelas dasar
    {
        cout << "Hallo saya function dari derived Class";
    }
};

int main()
{
}