#pragma once

#include "UzytkownikMenedzer.h"

using namespace std;

class KsiazkaAdresowa
{
    UzytkownikMenedzer uzytkownikMenedzer;

public:
    KsiazkaAdresowa(string nazwaPliku);
    void rejestracjaUzytkownika();
    void wypiszUzytkownikow();
    void logowanieUzytkownika();
    void pobierzIdZalogowanegoUzytkowika();
    void wylogujUzytkownika();

    void dodajAdresata();
};