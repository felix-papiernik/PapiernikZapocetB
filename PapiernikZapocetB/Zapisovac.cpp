#include "Zapisovac.h"
#include <fstream>
#include <iostream>
using namespace std;

Zapisovac::Zapisovac(char* nazovSuboru, const int pocetGenerovanych, const int pocetVypisovanych, int* polePtr)
{
	this->nazovSuboru = nazovSuboru;
	this->pocetGenerovanych = pocetGenerovanych;
	this->pocetRealnychVypisovanych = pocetVypisovanych > pocetGenerovanych ? pocetGenerovanych : pocetVypisovanych;
	this->polePtr = polePtr;
}

void Zapisovac::Zapisuj()
{
	ofstream fout;
	fout.open(nazovSuboru);

	for (int i = 0; i < this->pocetRealnychVypisovanych; i++) //netreba -1 lebo napr pri 50 sa ide od 0-49
	{
		fout << this->polePtr[i] << endl;
	}

	fout.close();
}

void Zapisovac::VypisDoKonzoly()
{
	for (int i = 0; i < pocetRealnychVypisovanych; i++)
	{
		cout << this->polePtr[i] << endl;
	}
	cout << endl;
}

Zapisovac::~Zapisovac()
{
	//this->nazovSuboru = nullptr;
	//this->polePtr = nullptr;
}
