#pragma once

#include <vector>
#include <string>
#include "PlikZAdresatami.h"
#include "Adresat.h"

using namespace std;

class AdresatMenedzer
{
    const int &idZalogowanegoUzytkownika;
    PlikZAdresatami plikZAdresatami;

public:
    AdresatMenedzer(string nazwaPliku, const int &idUzytkownika);
};
