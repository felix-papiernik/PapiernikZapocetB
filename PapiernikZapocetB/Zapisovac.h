#pragma once
class Zapisovac
{
private:
	char* nazovSuboru;
	int* polePtr;
	int pocetGenerovanych;
	int pocetRealnychVypisovanych;
public:
	Zapisovac(char* nazovSuboru, const int pocetGenerovanych, const int pocetVypisovanych, int* polePtr);
	void Zapisuj();
	void VypisDoKonzoly();
	~Zapisovac();
};

