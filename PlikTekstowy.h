#pragma once
#include <string>

using namespace std;

class PlikTekstowy
{
protected:
    const string NAZWA_PLIKU;

    bool czyPlikJestPusty();

    PlikTekstowy(string nazwaPliku);
};