#include "Generator.h"
#include <stdlib.h>
#include <ctime>

Generator::Generator(const int pocetGenerovanych)
{
	srand(time(NULL));
	this->pocetGenerovanych = pocetGenerovanych;
	this->pole = new int[pocetGenerovanych];

	for (int i = 0; i < pocetGenerovanych; i++)
	{
		pole[i] = rand();
	}
}

void Generator::Vymen()
{
	int nahodne1 = rand() % this->pocetGenerovanych;
	int nahodne2 = rand() % this->pocetGenerovanych;
	while (nahodne1 == nahodne2) {
		nahodne2 = rand() % this->pocetGenerovanych;
	}

	int hodnota1 = this->pole[nahodne1];
	int hodnota2 = this->pole[nahodne2];

	this->pole[nahodne1] = hodnota2;
	this->pole[nahodne2] = hodnota1;
}

int* Generator::PolePtr()
{
	return this->pole;
}

Generator::~Generator()
{
	delete[] this->pole;
	this->pole = nullptr;
}
