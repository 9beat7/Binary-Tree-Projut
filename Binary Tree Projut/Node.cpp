#include "Node.h"

ifstream in("data.txt");
ofstream out("Output.txt");

void bacaFile()
{
	string line, nama, umur, alamat;

	while (getline(in, line))
	{
		stringstream linestream(line);

		getline(linestream, nama, '\t');

		getline(linestream, umur, '\t');

		getline(linestream, alamat);

		cout << "nama: " << nama << " umur: " << umur << " alamat: " << alamat << '\n'; // buat ngetest bisa baca file atau ngga
	}
}