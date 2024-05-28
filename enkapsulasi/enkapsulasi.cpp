#include <iostream>
using namespace std;

class remoteLampu
{
private:
	string saklarNo[10]; // Array untuk menyimpan nama atau nomor saklar

public:
	void setSaklarNo(int i, string value) // Metode untuk mengatur nilai saklar
	{
		saklarNo[i] = value;
	}
	string getSaklarNo(int i)  // Metode untuk mendapatkan nilai saklar
	{
		return saklarNo[i];
	}
};

int main()
{
	remoteLampu lampuRumah; //membuat obyek

	// Mengatur beberapa saklar dengan nomor
	lampuRumah.setSaklarNo(0, "Lampu Teras Rumah");
	lampuRumah.setSaklarNo(1, "Lampu Ruang Tamu");
	lampuRumah.setSaklarNo(2, "Lampu Kamar Tidur");
	lampuRumah.setSaklarNo(3, "Lampu Dapur");

	// Mendapatkan dan menampilkan nilai saklar
	cout << lampuRumah.getSaklarNo(0) << endl;
	cout << lampuRumah.getSaklarNo(1) << endl;
	cout << lampuRumah.getSaklarNo(2) << endl;
	cout << lampuRumah.getSaklarNo(3) << endl;

	return 0;
}