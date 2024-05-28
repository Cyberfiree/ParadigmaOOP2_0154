#include <iostream>
using namespace std;

class AbstraksiKlas {
private: string x, y; // Data anggota privat

public:

	// methode untuk mengisi nilai
	// private mmeber
	void setXY(string a, string b) {
		x = a;
		y = b;
	}

	// menampilkan nilai
	void display() {
		cout << "x = " << x << endl;
		cout << "y = " << y << endl;
	}
};

int main()
{
	AbstraksiKlas ak; // Membuat objek dari kelas AbstraksiKlas
	ak.setXY("Yogyakarta", "Kampus"); // Mengisi nilai x dan y
	ak.display(); // Menampilkan nilai x dan y

	return 0;
}