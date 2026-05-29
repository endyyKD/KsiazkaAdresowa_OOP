#include <iostream>
#include "PlikZUzytkownikami.h"
#include "MetodyPomocnicze.h"
#include "UzytkownikMenedzer.h"

using namespace std;

UzytkownikMenedzer::UzytkownikMenedzer(string nazwaPliku) : plikZUzytkownikami(nazwaPliku)
{
    idZalogowanegoUzytkownika = 0;
    uzytkownicy = plikZUzytkownikami.wczytajUzytkownikowZPliku();
}

void UzytkownikMenedzer::rejestracjaUzytkownika()
{
    Uzytkownik uzytkownik = podajDaneNowegoUzytkownika();

    uzytkownicy.push_back(uzytkownik);

    plikZUzytkownikami.dopiszUzytkownikaDoPliku(uzytkownik);

    cout << endl
         << "Konto zalozono pomyslnie" << endl
         << endl;
    MetodyPomocnicze::pauza();
}

Uzytkownik UzytkownikMenedzer::podajDaneNowegoUzytkownika()
{
    Uzytkownik uzytkownik;

    // uzytkownik.id = pobierzIdNowegoUzytkownika();
    uzytkownik.ustawId(pobierzIdNowegoUzytkownika());

    do
    {
        cout << endl
             << "Podaj login: ";
        string login = MetodyPomocnicze::wczytajLinie();
        // uzytkownik.login = wczytajLinie();
        uzytkownik.ustawLogin(login);
    } while (czyIstniejeLogin(uzytkownik.pobierzLogin()) == true);

    cout << "Podaj haslo: ";
    string haslo = MetodyPomocnicze::wczytajLinie();
    // uzytkownik.haslo = wczytajLinie();
    uzytkownik.ustawHaslo(haslo);
    return uzytkownik;
}

int UzytkownikMenedzer::pobierzIdNowegoUzytkownika()
{
    if (uzytkownicy.empty() == true)
        return 1;
    else
        return uzytkownicy.back().pobierzId() + 1;
}

bool UzytkownikMenedzer::czyIstniejeLogin(string login)
{
    for (int i = 0; i < uzytkownicy.size(); i++)
    {
        if (uzytkownicy[i].pobierzLogin() == login)
        {
            cout << endl
                 << "Istnieje uzytkownik o takim loginie." << endl;
            return true;
        }
    }
    return false;
}

void UzytkownikMenedzer::wypiszUzytkownikow()
{
    for (const Uzytkownik &user : uzytkownicy)
    {
        cout << "ID: " << user.pobierzId() << endl;
        cout << "Login: " << user.pobierzLogin() << endl;
        cout << "Haslo: " << user.pobierzHaslo() << endl;
    }
}

void UzytkownikMenedzer::logowanieUzytkownika()
{
    string login = "", haslo = "";

    cout << endl
         << "Podaj login: ";
    login = MetodyPomocnicze::wczytajLinie();

    vector<Uzytkownik>::iterator itr = uzytkownicy.begin();
    while (itr != uzytkownicy.end())
    {
        if (itr->pobierzLogin() == login)
        {
            for (int iloscProb = 3; iloscProb > 0; iloscProb--)
            {
                cout << "Podaj haslo. Pozostalo prob: " << iloscProb << ": ";
                haslo = MetodyPomocnicze::wczytajLinie();

                if (itr->pobierzHaslo() == haslo)
                {
                    cout << endl
                         << "Zalogowales sie." << endl
                         << endl;
                    MetodyPomocnicze::pauza();
                    idZalogowanegoUzytkownika = itr->pobierzId();
                    return;
                }
            }
            cout << "Wprowadzono 3 razy bledne haslo." << endl;
            MetodyPomocnicze::pauza();
            return;
        }
        itr++;
    }
    cout << "Nie ma uzytkownika z takim loginem" << endl
         << endl;
    MetodyPomocnicze::pauza();
}

int UzytkownikMenedzer::pobierzIdZalogowanegoUzytkowika()
{
    return idZalogowanegoUzytkownika;
}

void UzytkownikMenedzer::wylogujUzytkownika()
{
    idZalogowanegoUzytkownika = 0;
}