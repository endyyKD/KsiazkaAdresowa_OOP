#include "KsiazkaAdresowa.h"

KsiazkaAdresowa::KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami)
    : uzytkownikMenedzer(nazwaPlikuZUzytkownikami),
      adresatMenedzer(nazwaPlikuZAdresatami, uzytkownikMenedzer.pobierzIdZalogowanegoUzytkowika())
{
}

void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikMenedzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszUzytkownikow()
{
    uzytkownikMenedzer.wypiszUzytkownikow();
}

void KsiazkaAdresowa::logowanieUzytkownika()
{
    uzytkownikMenedzer.logowanieUzytkownika();
    adresatMenedzer.zaladujAdresatow();
}

void KsiazkaAdresowa::pobierzIdZalogowanegoUzytkowika()
{
    cout << endl
         << "ID zalogowanego uzytkownika: " << uzytkownikMenedzer.pobierzIdZalogowanegoUzytkowika() << endl;
}

void KsiazkaAdresowa::wylogujUzytkownika()
{
    uzytkownikMenedzer.wylogujUzytkownika();
}

void KsiazkaAdresowa::zmianaHaslaUzytkownika()
{
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::dodajAdresata()
{
    adresatMenedzer.dodajAdresata();
}

void KsiazkaAdresowa::wyswietlIdOstatniego()
{
    adresatMenedzer.wyswietlIdOstatniego();
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow()
{
    adresatMenedzer.wyswietlWszystkichAdresatow();
}