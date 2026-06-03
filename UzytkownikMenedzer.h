#pragma once

#include <vector>
#include <string>
#include "Uzytkownik.h"
#include "PlikZUzytkownikami.h"

using namespace std;

class UzytkownikMenedzer
{
    int idZalogowanegoUzytkownika;
    vector<Uzytkownik> uzytkownicy;
    PlikZUzytkownikami plikZUzytkownikami;

    int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin(string login);
    Uzytkownik podajDaneNowegoUzytkownika();

public:
    UzytkownikMenedzer(string nazwaPliku);
    void rejestracjaUzytkownika();
    void wypiszUzytkownikow();
    void logowanieUzytkownika();
    const int& pobierzIdZalogowanegoUzytkowika();
    bool czyUzytkownikJestZalogowany();
    void wylogujUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
};
