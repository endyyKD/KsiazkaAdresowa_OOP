#include <iostream>
#include "KsiazkaAdresowa.h"
#include "MetodyPomocnicze.h"

using namespace std;

char wybierzOpcjeZMenuGlownego()
{
    char wybor;

    MetodyPomocnicze::clearScreen();
    cout << "    >>> MENU  GLOWNE <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Rejestracja" << endl;
    cout << "2. Logowanie" << endl;
    cout << "9. Koniec programu" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    wybor = MetodyPomocnicze::wczytajZnak();

    return wybor;
}

char wybierzOpcjeZMenuUzytkownika()
{
    char wybor;

    MetodyPomocnicze::clearScreen();
    cout << " >>> MENU UZYTKOWNIKA <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Dodaj adresata" << endl;
    cout << "2. Wyszukaj po imieniu" << endl;
    cout << "3. Wyszukaj po nazwisku" << endl;
    cout << "4. Wyswietl adresatow" << endl;
    cout << "5. Usun adresata" << endl;
    cout << "6. Edytuj adresata" << endl;
    cout << "---------------------------" << endl;
    cout << "7. Zmien haslo" << endl;
    cout << "8. Wyloguj sie" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    wybor = MetodyPomocnicze::wczytajZnak();

    return wybor;
}

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");
    char wybor;

    while (true)
    {
        if (!ksiazkaAdresowa.czyUzytkownikJestZalogowany())
        {
            wybor = wybierzOpcjeZMenuGlownego();

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
                cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
                MetodyPomocnicze::pauza();
                break;
            }
        }
        else
        {
            wybor = wybierzOpcjeZMenuUzytkownika();

            switch (wybor)
            {
            case '1':
                ksiazkaAdresowa.dodajAdresata();
                break;
            case '2':
                cout << endl << "Funkcja wyszukiwania po imieniu jest jeszcze niedostepna." << endl << endl;
                MetodyPomocnicze::pauza();
                break;
            case '3':
                cout << endl << "Funkcja wyszukiwania po nazwisku jest jeszcze niedostepna." << endl << endl;
                MetodyPomocnicze::pauza();
                break;
            case '4':
                ksiazkaAdresowa.wyswietlWszystkichAdresatow();
                break;
            case '5':
                cout << endl << "Funkcja usuwania adresata jest jeszcze niedostepna." << endl << endl;
                MetodyPomocnicze::pauza();
                break;
            case '6':
                cout << endl << "Funkcja edycji adresata jest jeszcze niedostepna." << endl << endl;
                MetodyPomocnicze::pauza();
                break;
            case '7':
                ksiazkaAdresowa.zmianaHaslaUzytkownika();
                break;
            case '8':
                ksiazkaAdresowa.wylogujUzytkownika();
                break;
            default:
                cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
                MetodyPomocnicze::pauza();
                break;
            }
        }
    }

    return 0;
}
