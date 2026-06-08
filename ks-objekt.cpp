#include <iostream>
#include "KsiazkaAdresowa.h"
#include "MetodyPomocnicze.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");
    char wybor;

    while (true)
    {
        if (!ksiazkaAdresowa.czyUzytkownikJestZalogowany())
        {
            wybor = ksiazkaAdresowa.wybierzOpcjeZMenuGlownego();

            switch (wybor)
            {
            case '1':
                ksiazkaAdresowa.rejestracjaUzytkownika();
                break;
            case '2':
                ksiazkaAdresowa.logowanieUzytkownika();
                break;
            case '9':
                exit(0);
                break;
            default:
                cout << endl
                     << "Nie ma takiej opcji w menu." << endl
                     << endl;
                MetodyPomocnicze::pauza();
                break;
            }
        }
        else
        {
            wybor = ksiazkaAdresowa.wybierzOpcjeZMenuUzytkownika();

            switch (wybor)
            {
            case '1':
                ksiazkaAdresowa.dodajAdresata();
                break;
            case '2':
                ksiazkaAdresowa.wyszukajAdresatowPoImieniu();
                break;
                // cout << endl
                //      << "Funkcja wyszukiwania po imieniu jest jeszcze niedostepna." << endl
                //      << endl;
                // MetodyPomocnicze::pauza();
                // break;
            case '3':
                ksiazkaAdresowa.wyszukajAdresatowPoNazwisku();
                break;
                // cout << endl
                //      << "Funkcja wyszukiwania po nazwisku jest jeszcze niedostepna." << endl
                //      << endl;
                // MetodyPomocnicze::pauza();
                // break;
            case '4':
                ksiazkaAdresowa.wyswietlWszystkichAdresatow();
                break;
            case '5':
                cout << endl
                     << "Funkcja usuwania adresata jest jeszcze niedostepna." << endl
                     << endl;
                MetodyPomocnicze::pauza();
                break;
            case '6':
                cout << endl
                     << "Funkcja edycji adresata jest jeszcze niedostepna." << endl
                     << endl;
                MetodyPomocnicze::pauza();
                break;
            case '7':
                ksiazkaAdresowa.zmianaHaslaUzytkownika();
                break;
            case '8':
                ksiazkaAdresowa.wylogujUzytkownika();
                break;
            default:
                cout << endl
                     << "Nie ma takiej opcji w menu." << endl
                     << endl;
                MetodyPomocnicze::pauza();
                break;
            }
        }
    }

    return 0;
}
