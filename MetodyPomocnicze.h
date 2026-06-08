#pragma once

#include <iostream>
#include <string>

using namespace std;

class MetodyPomocnicze
{
public:
    static void pauza();
    static void clearScreen();
    static string wczytajLinie();
    static char wczytajZnak();
    static string konwerjsaIntNaString(int liczba);
    static string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
    static int konwersjaStringNaInt(string liczba);
    static string pobierzLiczbe(string tekst, int pozycjaZnaku);
    static int wczytajLiczbeCalkowita();
};
