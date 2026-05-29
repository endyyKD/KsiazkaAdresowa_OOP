#pragma once

#include "UzytkownikMenedzer.h"
#include "AdresatMenedzer.h"

using namespace std;

class KsiazkaAdresowa
{
    UzytkownikMenedzer uzytkownikMenedzer;
    AdresatMenedzer adresatMenedzer;

public:
    KsiazkaAdresowa(string nazwaPliku, string nazwaPlikuZAdresatami);
    void rejestracjaUzytkownika();
    void wypiszUzytkownikow();
    void logowanieUzytkownika();
    void pobierzIdZalogowanegoUzytkowika();
    void wylogujUzytkownika();
    void zmianaHaslaUzytkownika();

    void dodajAdresata();
};