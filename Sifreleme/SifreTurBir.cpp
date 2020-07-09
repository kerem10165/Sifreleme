#include "SifreTurBir.h"

SifreTurBir::SifreTurBir(string metin,bool flag)
{
	this->metin = move(metin);
	if(flag)
	{
		sifrele();
	}
	else
	{
		coz(); 
	}
}

void SifreTurBir::sifrele()
{
	int word = 1;
	for (size_t i = 0; i < metin.size(); i++)
	{
		if (metin[i] == '\n' || metin[i] == ' ')
		{
			++word;
		}
		if (((int)metin[i] >= 65 && (int)metin[i] <= 90) || (((int)metin[i] >= 97 && (int)metin[i] <= 122)))
		{
			metin[i] += (word % 3);
			if(((int)metin[i] > 90 && (int)metin[i] < 97) || (((int)metin[i] > 122)))
			{
				metin[i] -= 26;
			}
		}
	}
}

void SifreTurBir::coz()
{
	int word = 1;
	for (size_t i = 0; i < metin.size(); i++)
	{
		if (metin[i] == '\n' || metin[i] == ' ')
		{
			++word;
		}
		if (((int)metin[i] >= 65 && (int)metin[i] <= 90) || (((int)metin[i] >= 97 && (int)metin[i] <= 122)))
		{
			metin[i] -= (word % 3);
			if (((int)metin[i] > 90 && (int)metin[i] < 97) || (((int)metin[i] < 65)))
			{
				metin[i] += 26;
			}
		}
	}
}
