#include <iostream>
using namespace std;

class TOsoba
{
    friend ostream &operator<<(ostream &os, const TOsoba o);

    string imie;
    int wiek;

public:
    TOsoba(string IMIE, int WIEK) : imie(IMIE), wiek(WIEK){};
};

ostream &operator<<(ostream &os, const TOsoba o)
{
    os << o.imie << " - " << o.wiek << endl;
    return os;
};

int main()
{
    TOsoba osoby[] = {{"Alicja", 32},
                      {"Tomasz", 42},
                      {"Kamil", 12},
                      {"Piotr", 89},
                      {"Pawel", 77}};

    for (TOsoba osoba : osoby)
        cout << osoba;

    return 0;
}