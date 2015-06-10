#include <cstdio>
#include <iostream>
#include <windows.h>
#include <string>
#include<cstdlib>
//#include <node.h>
//#include <tree.h>

using namespace std;

int main();
void tampildata();

//////////////////////// M E N U   U T A M A ////////////////////////////

int main (){
	
 	system("CLS");
 	fflush stdin;
	string pilihan;
	char terserah;
	cout << "--- BINARY TREE ---" << endl;
	cout << "Silahkan Masukkan Pilihan:" << endl;
	cout <<	"1. Tampil Data" << endl;
	cout << "2. Tambah Karakter" << endl;
	cout << "3. Kurang Karakter" << endl;
	cout << "4. Exit" << endl;
	cout << "masukkan pilihan anda <1--4>: " << endl;
	cin >> pilihan;
	cout << "" << endl;
	cout << "" << endl;
	
	try
	{
		if (pilihan.compare("1") == 0||pilihan.compare("2") == 0||pilihan.compare("3") == 0||pilihan.compare("4") == 0)
		{
			int pil= atoi(pilihan.c_str());
			switch (pil)
			{
				case 1: 
				{
					tampildata();
					break;
				}
				case 2: 
				{
					cout << "2";
					break;
				}
				case 3: 
				{
					cout << "3";
					
					break;
				}
				case 4:
				{
					system("CLS");
					cout << "Terima Kasih" << endl;
					break;
				}
			}
		}
		else
		{
			throw "Maaf, input yang anda masukkan salah. Silahkan coba kembali.";
		}	 	
	}
	catch (const char* e)	
	{
		system("CLS");
		cerr << e << endl;
		cout << "tekan apa saja untuk kembali." << endl;
		cin >> terserah;
		main();
	}
		
		

	
return 0;	
}

////////////////////////////////// M E N U   T A M P I L     D A T A ////////////////////
void tampildata (){
	
 	system("CLS");
 	fflush stdin;
	string pilihan;
	char terserah;
	cout << "--- MENU TAMPIL DATA ---" << endl;
	cout << "Silahkan Masukkan Pilihan:" << endl;
	cout <<	"1. Tampilkan Semua Data" << endl;
	cout << "2. Tampikan Karakter diatas Umur Tertentu" << endl;
	cout << "3. Tampilkan Karakter dengan Alamat Tertentu" << endl;
	cout << "4. Kembali ke Main Menu" << endl;
	cout << "masukkan pilihan anda <1--4>: " << endl;
	cin >> pilihan;
	cout << "" << endl;
	cout << "" << endl;
	
	try
	{		
		if (pilihan.compare("1") == 0||pilihan.compare("2") == 0||pilihan.compare("3") == 0||pilihan.compare("4") == 0)
		{
			int pil= atoi(pilihan.c_str());
			switch (pil)
			{
				case 1: 
				{
					cout << "1";
					break;
				}
				case 2: 
				{
					cout << "2";
					break;
				}
				case 3: 
				{
					cout << "3";
					
					break;
				}
				case 4:
				{
					system("CLS");
					main();
					break;
				}
			}
		}
		else
		{
			throw "Maaf, input yang anda masukkan salah. Silahkan coba kembali.";
		}	 	
	}
	catch (const char* e)	
	{
		system("CLS");
		cerr << e << endl;
		cout << "tekan apa saja untuk kembali." << endl;
		cin >> terserah;
		tampildata();
	}
		
}









