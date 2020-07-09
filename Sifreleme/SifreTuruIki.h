#pragma once
#include <iostream>
#include <string>
#include <fstream>

using namespace std;


class SifreTuruIki
{
public:
	SifreTuruIki(bool flag,string& adres ,string metin);

	static string sifrele(const string& adres,const string& metin);
	static string coz(const string& adres);

private:
	string adres;
	string metin;
	string binary;
	int* dec_to_bin(int sayi, int* dizi)
	{
		
	}
};

