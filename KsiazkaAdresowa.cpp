#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::pauza()
{
    cout << "Nacisnij Enter, aby kontynuowac...";
    string tmp;
    getline(cin, tmp);
}

void KsiazkaAdresowa::clearScreen()
{
    cout << "\033[2J\033[H";
}

string KsiazkaAdresowa::wczytajLinie()
{
    string wejscie = "";
    getline(cin, wejscie);
    return wejscie;
}

void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    Uzytkownik uzytkownik = podajDaneNowegoUzytkownika();

    uzytkownicy.push_back(uzytkownik);
    // dopiszUzytkownikaDoPliku(uzytkownik);

    cout << endl
         << "Konto zalozono pomyslnie" << endl
         << endl;
    pauza();
}

Uzytkownik KsiazkaAdresowa::podajDaneNowegoUzytkownika()
{
    Uzytkownik uzytkownik;

    // uzytkownik.id = pobierzIdNowegoUzytkownika();
    uzytkownik.ustawId(pobierzIdNowegoUzytkownika());

    do
    {
        cout << endl
             << "Podaj login: ";
        string login = wczytajLinie();
        // uzytkownik.login = wczytajLinie();
        uzytkownik.ustawLogin(login);
    } while (czyIstniejeLogin(uzytkownik.pobierzLogin()) == true);

    cout << "Podaj haslo: ";
    string haslo = wczytajLinie();
    // uzytkownik.haslo = wczytajLinie();
    uzytkownik.ustawHaslo(haslo);
    return uzytkownik;
}

int KsiazkaAdresowa::pobierzIdNowegoUzytkownika()
{
    if (uzytkownicy.empty() == true)
        return 1;
    else
        return uzytkownicy.back().pobierzId() + 1;
}

bool KsiazkaAdresowa::czyIstniejeLogin(string login)
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

void KsiazkaAdresowa::wypiszUzytkownikow()
{
    for (const Uzytkownik &user : uzytkownicy)
    {
        cout << "ID: " << user.pobierzId() << endl;
        cout << "Login: " << user.pobierzLogin() << endl;
        cout << "Haslo: " << user.pobierzHaslo() << endl;
    }
}