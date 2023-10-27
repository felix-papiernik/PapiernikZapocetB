// PapiernikZapocetB.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


#define _CRTDBG_MAO_ALLOC
#include <stdlib.h>
#include <crtdbg.h>
#include "Generator.h"
#include "Zapisovac.h"
int main(int argc, char* argv[])
{
    
    cout << argv[0] << endl;
    cout << argv[1] << endl;
    cout << argv[2] << endl;
    cout << argv[3] << endl;
    int pocetGenerovanych = atoi(argv[2]);
    int pocetZapisovanych = atoi(argv[3]);

    Generator* generator = new Generator(pocetGenerovanych);
    Zapisovac* zapisovac = new Zapisovac(argv[1], pocetGenerovanych, pocetZapisovanych, (*generator).PolePtr());

    zapisovac->VypisDoKonzoly();
    generator->Vymen();
    zapisovac->VypisDoKonzoly();

    zapisovac->Zapisuj();

    delete generator;
    generator = nullptr;
    delete zapisovac;
    zapisovac = nullptr;

    _CrtDumpMemoryLeaks();
}
