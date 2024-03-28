#include <iostream>
#include <cmath>
using namespace std;

class Zwierze
{
public:
    int wiek{10}, iloscNog{4};
};

class ZwierzeDomowe : public Zwierze
{
public:
    string imie{"asdf"}, kolorSiersci{"bialy"};
};

class Hipopotam : public Zwierze
{
};

class Kot : public ZwierzeDomowe
{
public:
    void dajGlos() { cout << "miauuuuu" << endl; }
};

class Pies : public ZwierzeDomowe
{
public:
    void dajGlos() { cout << "Hau hau" << endl; }
};

int main()
{
    Hipopotam hipopotam;
    Kot kot;
    Pies pies;

    cout << "Hipopotam:" << endl;
    cout << "Wiek:      " << hipopotam.wiek << endl;
    cout << "Ilosc nog: " << hipopotam.iloscNog << endl
         << endl;

    cout << "Kot:" << endl;
    cout << "Wiek:          " << kot.wiek << endl;
    cout << "Ilosc nog:     " << kot.iloscNog << endl;
    cout << "Imie:          " << kot.imie << endl;
    cout << "Kolor siersci: " << kot.kolorSiersci << endl;
    kot.dajGlos();
    cout << endl;

    cout << "Pies:" << endl;
    cout << "Wiek:          " << pies.wiek << endl;
    cout << "Ilosc nog:     " << pies.iloscNog << endl;
    cout << "Imie:          " << pies.imie << endl;
    cout << "Kolor siersci: " << pies.kolorSiersci << endl;
    pies.dajGlos();

    return 0;
}