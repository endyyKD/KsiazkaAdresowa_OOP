#pragma once

#include "Adresat.h"
#include <string>
#include <fstream>
#include <vector>

using namespace std;

class PlikZAdresatami
{
    const string nazwaPlikuZAdresatami;
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    bool czyPlikJestPusty();

public:
    PlikZAdresatami(string nazwaPliku);
    void dopiszAdresataDoPliku(Adresat adresat);
};
