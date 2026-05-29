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