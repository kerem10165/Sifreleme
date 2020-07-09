#include <iostream>
#include <fstream>
#include <string>
#include "SifreTurBir.h"

using namespace std;

void metinAl(string& metin);

int main()
{
	string metin;

	metinAl(metin);

	SifreTurBir sifre_bir_sifrele(metin,true);

	metin = sifre_bir_sifrele.getMetin();

	cout << metin << endl;

	SifreTurBir sifre_bir_coz(metin, false);

	metin = sifre_bir_coz.getMetin();

	cout << metin << endl;



	return 0;
}

void metinAl(string& metin)
{
	string temp;
	while (getline(cin, temp))
	{
		metin += temp += '\n';
	}
}
