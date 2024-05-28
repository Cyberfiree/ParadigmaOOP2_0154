#include <iostream>
using namespace std;

class seseorang
{
public:
    virtual void pesan() = 0; // Fungsi virtual murni, membuat seseorang menjadi kelas abstrak


    // membuat virtual fungsi biasa
    // virtual void pesan()
    // {
    //    cout << "Pesan dari seseorang" << endl;
    // }
};

class joko : public seseorang // membuat kelas joko dengan akses modif public dan turunan dari kelas seseorang
{
public:
};
    int main()
{
}