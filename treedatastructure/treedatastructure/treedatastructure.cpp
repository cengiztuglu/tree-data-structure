#include <iostream>
#include "data.h"
#include <stack>
#include <queue>
#include <chrono>
int main()
{
    std::cout << "Hello World!\n";
}



void IkiliSiralamaAgaci::agacKur(int* dizi)
{
    kok = NULL;
	for (int i = 0; i <UZUNLUK; i++)
	{
		Dugum* yeni = new Dugum();
		bool eklendi = false;
		yeni->veri = dizi[i];
		yeni->sag = NULL;
		yeni->sol = NULL;
		if (kok==NULL)
		{
			kok = yeni;
			continue;
		}
		Dugum* tara = kok;
		while ((tara) && (!eklendi))
		{
			if (dizi[i]<tara->veri)
			{
				if (tara->sol != NULL)
					tara = tara->sol;
				else
				{
					tara->sol = yeni;
					eklendi = true; 
				}
			}
			else if (dizi[i]>tara->veri)
			{
				if (tara->sag != NULL)
				{
					tara = tara->sag;
				}
				else
				{
					tara->sag = yeni;
					eklendi=true;
				}
			}
		}
	}
}
