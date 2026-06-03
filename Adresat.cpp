#include "Adresat.h"

Adresat::Adresat()
{
    id = 0;
    idUzytkownika = 0;
    imie = "";
    nazwisko = "";
    numerTelefonu = "";
    email = "";
    adres = "";
}

void Adresat::ustawId(int noweId) { id = noweId; }
void Adresat::ustawIdUzytkownika(int noweIdUzytkownika) { idUzytkownika = noweIdUzytkownika; }
void Adresat::ustawImie(string noweImie) { imie = noweImie; }
void Adresat::ustawNazwisko(string noweNazwisko) { nazwisko = noweNazwisko; }
void Adresat::ustawNumerTelefonu(string nowyNumerTelefonu) { numerTelefonu = nowyNumerTelefonu; }
void Adresat::ustawEmail(string nowyEmail) { email = nowyEmail; }
void Adresat::ustawAdres(string nowyAdres) { adres = nowyAdres; }

int Adresat::pobierzId() const { return id; }
int Adresat::pobierzIdUzytkownika() const { return idUzytkownika; }
string Adresat::pobierzImie() const { return imie; }
string Adresat::pobierzNazwisko() const { return nazwisko; }
string Adresat::pobierzNumerTelefonu() const { return numerTelefonu; }
string Adresat::pobierzEmail() const { return email; }
string Adresat::pobierzAdres() const { return adres; }
