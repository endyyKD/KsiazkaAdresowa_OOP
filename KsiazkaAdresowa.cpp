#include "KsiazkaAdresowa.h"

KsiazkaAdresowa::KsiazkaAdresowa(string nazwaPliku) : uzytkownikMenedzer(nazwaPliku)
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