#include <iostream>
using namespace std;

class Figura
{
protected:
    int wysokosc, szerokosc;

public:
    void ustawWartosc(int WYS, int SZER)
    {
        wysokosc = WYS;
        szerokosc = SZER;
    }
};

class Prostokat : public Figura
{
public:
    int pole() { return wysokosc * szerokosc; }
};
class Trojkat : public Figura
{
public:
    int pole() { return wysokosc * szerokosc / 2; }
};

int main()
{
    Prostokat prostokat;
    Trojkat trojkat;

    prostokat.ustawWartosc(3, 4);
    trojkat.ustawWartosc(12, 4);

    cout << "Pole prostokata: " << prostokat.pole() << endl;
    ;
    cout << "Pole trojkata:   " << trojkat.pole() << endl;
    ;

    return 0;
}