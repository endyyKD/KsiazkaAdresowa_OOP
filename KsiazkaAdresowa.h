#pragma once

#include <iostream>
#include <vector>
#include <string>

#include "Uzytkownik.h"

using namespace std;

class KsiazkaAdresowa
{
    int idZalogowanegoUzytkownika;
    int idOstatniegoAdresata;
    int idUsunietegoAdresata;

    vector<Uzytkownik> uzytkownicy;

    Uzytkownik podajDaneNowegoUzytkownika();
    int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin(string login);
    void pauza();
    void clearScreen();
    string wczytajLinie();

public:
    void rejestracjaUzytkownika(); // vector jest częścią klasy, więc funckja nie musi przyjmować vectora jako swojego parametru
    void wypiszUzytkownikow();
};