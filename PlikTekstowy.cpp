#include "PlikTekstowy.h"
#include <fstream>

PlikTekstowy::PlikTekstowy(string nazwaPliku)
    : NAZWA_PLIKU(nazwaPliku)
{
}

bool PlikTekstowy::czyPlikJestPusty()
{
    fstream plikTekstowy;
    plikTekstowy.open(NAZWA_PLIKU.c_str(), ios::in);
    plikTekstowy.seekg(0, ios::end);
    if (plikTekstowy.tellg() == 0)
        return true;
    else
        return false;
}
