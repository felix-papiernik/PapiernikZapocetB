#pragma once
class Generator
{
private:
	int* pole;
	int pocetGenerovanych;
public:
	Generator(const int pocetGenerovanych);
	void Vymen();
	int* PolePtr();
	~Generator();
};

