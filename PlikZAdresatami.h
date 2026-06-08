#pragma once

#include "PlikTekstowy.h"
#include "Adresat.h"
#include <string>
#include <fstream>
#include <vector>

using namespace std;

class PlikZAdresatami
    : public PlikTekstowy

{
    int ostatnieIdZPlikuZAdresatami;
    const string NAZWA_TYMCZASOWEGO_PLIKU_Z_ADRESATAMI;

    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    void zaktualizujAdresataWPliku(int idAdresata, string nowaLinia);
    void usunPlik(string nazwaPlikuZRozszerzeniem);
    void zmienNazwePliku(string staraNazwa, string nowaNazwa);

public:
    PlikZAdresatami(string nazwaPliku);
    void dopiszAdresataDoPliku(Adresat adresat);
    vector<Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    int pobierzOstatnieIdZPliku();
    void zaktualizujDaneWybranegoAdresata(Adresat adresat);
    void usunAdresataZPliku(int idAdresata);
};
