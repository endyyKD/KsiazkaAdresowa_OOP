#pragma once

#include <vector>
#include <string>
#include "PlikZAdresatami.h"
#include "Adresat.h"

using namespace std;

class AdresatMenedzer
{
    const int &idZalogowanegoUzytkownika;
    vector<Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;
    int idUsunietegoAdresata;

    Adresat podajDaneNowegoAdresata();
    void wyswietlDaneAdresata(Adresat adresat);

public:
    AdresatMenedzer(string nazwaPliku, const int &idUzytkownika);
    void zaladujAdresatow();
    void dodajAdresata();
    void wyswietlIdOstatniego();
    void wyswietlWszystkichAdresatow();
};
