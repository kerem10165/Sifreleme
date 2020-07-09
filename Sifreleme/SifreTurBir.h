#pragma once
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class SifreTurBir
{
public:
	SifreTurBir(string metin,bool flag);
	string getMetin() const 
	{
		return metin;
	}

private:
	string metin;
	void sifrele();
	void coz();
};

