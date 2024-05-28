#include <iostream>
using namespace std;

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
    derivedClass a; // Membuat objek dari kelas turunan
    a.perkenalan();    // Memanggil fungsi perkenalan dari objek kelas turunan

    return 0;
}