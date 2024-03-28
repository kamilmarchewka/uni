#include <iostream>
#include <cmath>
using namespace std;

class Punkt
{
protected:
    float x, y;
    string nazwa;

public:
    Punkt(string NAZWA = "S", float X = 0, float Y = 0) : nazwa(NAZWA), x(X), y(Y){};

    void wyswietlWsp() { cout << "(" << x << "," << y << ")" << endl; }
};

class Kolo : public Punkt
{
    float promien;
    string nazwa;

public:
    Kolo(string NAZWA = "kolko", string NAZWA_P = "S", float X = 0, float Y = 0, float PROMIEN = 1) : nazwa(NAZWA), Punkt(NAZWA_P, X, Y), promien(PROMIEN){};

    void wyswietl()
    {
        cout << "Nazwa kola:   " << nazwa << endl;
        cout << "Srodek:       " << Punkt::nazwa << endl;

        cout << "Srodek kola:  ";
        wyswietlWsp();

        cout << "Promien kola: " << promien << endl;
        cout << "Pole kola:    " << M_PI * promien * promien << endl;
    }
};

int main()
{
    Kolo kolo;
    kolo.wyswietl();

    return 0;
}