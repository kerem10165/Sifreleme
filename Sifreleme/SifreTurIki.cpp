#include "SifreTurIki.h"

SifreTurIki::SifreTurIki(string adres, bool flag, string metin = "")
{
	this -> adres = adres;
	this->metin = metin;
	if (flag)
	{
		sifrele(this->metin);
	}
}
