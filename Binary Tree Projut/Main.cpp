#include <fstream>
#include "Node.h"
#include "Tree.h"

void menuUtama();
void tampilData();
void tambahKarakter();
void kurangKarakter();

string input;

ifstream in("data.txt");

int main()
{
	menuUtama();
}

void menuUtama()
{
	cout << "MENU UTAMA" << "\n\n";
	cout << "1. Tampil data" << '\n';
	cout << "2. Tambah karakter" << '\n';
	cout << "3. Kurang Karakter" << '\n';
	cout << "4. Exit" << "\n\n";
	cout << "Masukkan pilihan Anda (1-4): ";

	getline(cin, input);
	cout << '\n';

	switch (input[0])
	{
	case '1':
		tampilData();
		break;
	case '2':
		tambahKarakter();
		break;
	case '3':
		kurangKarakter();
		break;
	case '4':
		break;
	}
}

void tampilData()
{
	cout << "MENU TAMPIL DATA" << "\n\n";
	cout << "1. Tampil semua data" << '\n';
	cout << "2. Tampil karakter di atas umur tertentu" << '\n';
	cout << "3. Tampil karakter di alamat tertentu" << '\n';
	cout << "4. Kembali ke Menu Utama" << "\n\n";
	cout << "Masukkan pilihan Anda (1-4): ";

	getline(cin, input);
	cout << '\n';

	switch (input[0])
	{
	case '1':
		tampilData();
		break;
	case '2':
		tambahKarakter();
		break;
	case '3':
		kurangKarakter();
		break;
	case '4':
		menuUtama();
		break;
	}
}

void tambahKarakter()
{

}

void kurangKarakter()
{

}