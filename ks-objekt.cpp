#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");

    ksiazkaAdresowa.wypiszUzytkownikow();
    ksiazkaAdresowa.pobierzIdZalogowanegoUzytkowika();
    ksiazkaAdresowa.logowanieUzytkownika();
    ksiazkaAdresowa.pobierzIdZalogowanegoUzytkowika();
    ksiazkaAdresowa.dodajAdresata();
    ksiazkaAdresowa.wyswietlIdOstatniego();
    ksiazkaAdresowa.dodajAdresata();
    ksiazkaAdresowa.wyswietlIdOstatniego();
    ksiazkaAdresowa.wyswietlWszystkichAdresatow();

    return 0;
}