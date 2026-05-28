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

public:
    Uzytkownik podajDaneNowegoUzytkownika();
    void rejestracjaUzytkownika();
    void wypiszUzytkownikow();
};
