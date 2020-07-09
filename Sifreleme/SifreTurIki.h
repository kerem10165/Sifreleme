#pragma once
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class SifreTurIki
{
public:
	SifreTurIki(string adres, bool flag,string metin);


private:
	string metin;
	string adres;
	string binarys;
};

