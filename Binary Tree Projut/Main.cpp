#include <cstdio>
#include <iostream>
#include <windows.h>
#include <string>
#include<cstdlib>
#include "Node.h"
#include "Tree.h"

void bacaFile();
void menuUtama();
void tampilData();
void tambahKarakter();
void kurangKarakter();
void tampilSemuaData();
void tampilKarakterUmur();
void tampilKarakterAlamat();
void keluar();
void tulisFile();

string input;

int main()
{
	bacaFile();
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

	try
	{
		if (input.compare("1") == 0 || input.compare("2") == 0 || input.compare("3") == 0 || input.compare("4") == 0)
		{
			int pil = atoi(input.c_str());
			switch (pil)
			{
			case 1:
				tampilData();
				break;
			case 2:
				tambahKarakter();
				break;
			case 3:
				kurangKarakter();
				break;
			case 4:
				keluar();
				break;
			}
		}
		else
		{
			throw "Maaf, input yang anda masukkan salah. Silakan coba kembali.";
		}
	}
	catch (const char* e)
	{
		cerr << e << "\n\n";
		menuUtama();
	}
}

void tampilData()
{
	cout << "MENU TAMPIL DATA" << "\n\n";
	cout << "1. Tampil semua data" << '\n';
	cout << "2. Tampil karakter lebih dari umur tertentu" << '\n';
	cout << "3. Tampil karakter dengan alamat tertentu" << '\n';
	cout << "4. Kembali ke Menu Utama" << "\n\n";
	cout << "Masukkan pilihan Anda (1-4): ";

	getline(cin, input);
	cout << '\n';

	try
	{
		if (input.compare("1") == 0 || input.compare("2") == 0 || input.compare("3") == 0 || input.compare("4") == 0)
		{
			int pil = atoi(input.c_str());
			switch (pil)
			{
			case 1:
				tampilSemuaData();
				break;
			case 2:
				tambahKarakter();
				break;
			case 3:
				kurangKarakter();
				break;
			case 4:
				menuUtama();
				break;
			}
		}
		else
		{
			throw "Maaf, input yang anda masukkan salah. Silakan coba kembali.";
		}
	}
	catch (const char* e)
	{
		cerr << e << "\n\n";
		tampilData();
	}
}

void tambahKarakter()
{

}

void kurangKarakter()
{

}

void tampilSemuaData()
{

}

void tampilKarakterUmur()
{

}

void tampilKarakterAlamat()
{

}

void keluar()
{
	tulisFile();
}
