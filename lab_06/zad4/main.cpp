#include <iostream>
using namespace std;

struct TStruktura
{
    friend bool operator!(const TStruktura &s);

    string imie;
    TStruktura(string IMIE) : imie(IMIE){};
};

bool operator!(const TStruktura &s)
{
    return s.imie.length() > 5 ? true : false;
}

int main()
{
    // TStruktura imiona[] = {TStruktura("Jan"), TStruktura("Grzegorz")};
    TStruktura imiona[] = {{"Jan"}, {"Kamil"}, {"Piotr"}, {"Konstanty"}, {"Pawelek"}};

    for (TStruktura s : imiona)
        if (!s.imie)
            cout << s.imie << " ";

    return 0;
}