#include <sstream>
#include "MetodyPomocnicze.h"
using namespace std;

void MetodyPomocnicze::pauza()
{
    cout << "Nacisnij Enter, aby kontynuowac...";
    string tmp;
    getline(cin, tmp);
}

void MetodyPomocnicze::clearScreen()
{
    cout << "\033[2J\033[H";
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