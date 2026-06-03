#pragma once

#include "UzytkownikMenedzer.h"
#include "AdresatMenedzer.h"

using namespace std;

class KsiazkaAdresowa
{
    UzytkownikMenedzer uzytkownikMenedzer;
    AdresatMenedzer *adresatMenedzer;
    const string NAZWA_PLIKU_Z_ADRESATAMI;

public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami);
    ~KsiazkaAdresowa();
    void rejestracjaUzytkownika();
    void wypiszUzytkownikow();
    void logowanieUzytkownika();
    bool czyUzytkownikJestZalogowany();
    void pobierzIdZalogowanegoUzytkowika();
    void wylogujUzytkownika();
    void zmianaHaslaUzytkownika();

    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
};