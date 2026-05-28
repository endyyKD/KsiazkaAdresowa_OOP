#pragma once

#include <iostream>
#include <string>

using namespace std;

class Uzytkownik
{
    int id;
    string login;
    string haslo;

public:
    void ustawId(int noweId);
    void ustawLogin(string nowyLogin);
    void ustawHaslo(string noweHaslo);

    int pobierzId() const;
    string pobierzLogin() const;
    string pobierzHaslo() const;
};