#pragma once

#include <vector>
#include <string>
#include "PlikZAdresatami.h"
#include "Adresat.h"

using namespace std;

class AdresatMenedzer
{
    const int ID_ZALOGOWANEGO_UZYTKOWNIKA;
    vector<Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;
    int idUsunietegoAdresata;

    Adresat podajDaneNowegoAdresata();
    void wyswietlDaneAdresata(Adresat adresat);

public:
    AdresatMenedzer(string nazwaPliku, int idUzytkownika);
    void zaladujAdresatow();
    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
};
