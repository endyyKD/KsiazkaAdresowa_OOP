#include <sstream>
#include "MetodyPomocnicze.h"
#include <algorithm>
using namespace std;

void MetodyPomocnicze::pauza()
{
    cout << "Nacisnij Enter, aby kontynuowac...";
    string tmp;
    getline(cin, tmp);
}

void MetodyPomocnicze::clearScreen()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

string MetodyPomocnicze::wczytajLinie()
{
    string wejscie = "";
    getline(cin, wejscie);
    return wejscie;
}

string MetodyPomocnicze::konwerjsaIntNaString(int liczba)
{
    ostringstream ss;
    ss << liczba;
    string str = ss.str();
    return str;
}

string MetodyPomocnicze::zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst)
{
    if (!tekst.empty())
    {
        transform(tekst.begin(), tekst.end(), tekst.begin(), ::tolower);
        tekst[0] = toupper(tekst[0]);
    }
    return tekst;
}

int MetodyPomocnicze::konwersjaStringNaInt(string liczba)
{
    int liczbaInt;
    istringstream iss(liczba);
    iss >> liczbaInt;

    return liczbaInt;
}