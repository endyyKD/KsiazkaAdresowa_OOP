#pragma once

#include "UzytkownikMenedzer.h"
#include "AdresatMenedzer.h"

using namespace std;

class KsiazkaAdresowa
{
    UzytkownikMenedzer uzytkownikMenedzer;
    AdresatMenedzer adresatMenedzer;

public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami);
    void rejestracjaUzytkownika();
    void wypiszUzytkownikow();
    void logowanieUzytkownika();
    void pobierzIdZalogowanegoUzytkowika();
    void wylogujUzytkownika();
    void zmianaHaslaUzytkownika();

    void dodajAdresata();
    void wyswietlIdOstatniego();
    void wyswietlWszystkichAdresatow();

};