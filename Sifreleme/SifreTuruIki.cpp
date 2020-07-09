#include "SifreTuruIki.h"

#include <vector>

SifreTuruIki::SifreTuruIki(bool flag, string& adres, string metin = "")
{
	this->adres = adres;
	this->metin = metin;
}

string SifreTuruIki::sifrele(const string& adres, const string& metin)
{
	string binary;
	const int SIZE = metin.size();
	int* dizi = new int[SIZE];
	for (size_t i = 0; i < SIZE; i++)
	{
		dizi[i] = (int)metin[i];
	}

	int** sekiz_dizi = new int*[SIZE];
	
	for (size_t i = 0; i < SIZE; i++)
	{
		for (size_t i = 0; i < 8; i++)
		{
			sekiz_dizi[i] = new int[8];

		}
	}

	delete[] dizi;
}
