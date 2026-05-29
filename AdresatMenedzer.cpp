#include <iostream>
#include "AdresatMenedzer.h"
#include "MetodyPomocnicze.h"

using namespace std;

AdresatMenedzer::AdresatMenedzer(string nazwaPliku, const int &idUzytkownika)
    : idZalogowanegoUzytkownika(idUzytkownika), plikZAdresatami(nazwaPliku)
{
    idOstatniegoAdresata = 0;
}

void AdresatMenedzer::dodajAdresata()
{
    Adresat adresat;

    MetodyPomocnicze::clearScreen();

    cout << endl
         << endl
         << " >>> DODAWANIE NOWEGO ADRESATA <<<" << endl
         << endl;
    adresat = podajDaneNowegoAdresata();

    adresaci.push_back(adresat);
    // dopiszAdresataDoPliku(adresat);

    idOstatniegoAdresata++;
}

Adresat AdresatMenedzer::podajDaneNowegoAdresata()
{
    Adresat adresat;

    adresat.ustawId(idOstatniegoAdresata + 1);
    adresat.ustawIdUzytkownika(idZalogowanegoUzytkownika);

    cout << "Podaj imie: ";
    adresat.ustawImie(MetodyPomocnicze::wczytajLinie());
    adresat.ustawImie(MetodyPomocnicze::zamienPierwszaLitereNaDuzaAPozostaleNaMale(adresat.pobierzImie()));

    cout << "Podaj nazwisko: ";
    adresat.ustawNazwisko(MetodyPomocnicze::wczytajLinie());
    adresat.ustawNazwisko(MetodyPomocnicze::zamienPierwszaLitereNaDuzaAPozostaleNaMale(adresat.pobierzNazwisko()));

    cout << "Podaj numer telefonu: ";
    adresat.ustawNumerTelefonu(MetodyPomocnicze::wczytajLinie());

    cout << "Podaj email: ";
    adresat.ustawEmail(MetodyPomocnicze::wczytajLinie());

    cout << "Podaj adres: ";
    adresat.ustawAdres(MetodyPomocnicze::wczytajLinie());

    return adresat;
}

void AdresatMenedzer::wyswietlIdOstatniego() // TODO do usuniecia potem
{
    cout << "ID ostatniego adresata: " << idOstatniegoAdresata << endl;
}

void AdresatMenedzer::wyswietlWszystkichAdresatow()
{
    MetodyPomocnicze::clearScreen();
    if (!adresaci.empty())
    {
        cout << "             >>> ADRESACI <<<" << endl;
        cout << "-----------------------------------------------" << endl;
        for (vector<Adresat>::iterator itr = adresaci.begin(); itr != adresaci.end(); itr++)
        {
            wyswietlDaneAdresata(*itr);
        }
        cout << endl;
    }
    else
    {
        cout << endl
             << "Ksiazka adresowa jest pusta." << endl
             << endl;
    }
    MetodyPomocnicze::pauza();
}

void AdresatMenedzer::wyswietlDaneAdresata(Adresat adresat)
{
    cout << endl
         << "Id:                 " << adresat.pobierzId() << endl;
    cout << "Imie:               " << adresat.pobierzImie() << endl;
    cout << "Nazwisko:           " << adresat.pobierzNazwisko() << endl;
    cout << "Numer telefonu:     " << adresat.pobierzNumerTelefonu() << endl;
    cout << "Email:              " << adresat.pobierzEmail() << endl;
    cout << "Adres:              " << adresat.pobierzAdres() << endl;
}