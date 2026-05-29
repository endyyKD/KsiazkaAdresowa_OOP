#include <iostream>
#include "AdresatMenedzer.h"

using namespace std;

AdresatMenedzer::AdresatMenedzer(string nazwaPliku, const int& idUzytkownika)
    : idZalogowanegoUzytkownika(idUzytkownika), plikZAdresatami(nazwaPliku)
{
}
