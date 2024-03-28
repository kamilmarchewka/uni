#include <iostream>
#include <cmath>
using namespace std;

class Bryla
{
public:
    virtual double polePowierzchni() { return 0; };
    virtual double objetosc() { return 0; };

    void wyswietl()
    {
        cout << "PP: " << polePowierzchni() << endl;
        cout << "V: " << objetosc() << endl;
    }
};

class Kula : public Bryla
{
public:
    Kula(double R) : promien(R){};
    double polePowierzchni() override { return 4 * M_PI * pow(promien, 2.); }
    double objetosc() override { return 4 / 3 * M_PI * pow(promien, 3.); }

    void wyswietl()
    {
        cout << "Kula:" << endl;
        cout << "Promien: " << promien << endl;
        Bryla::wyswietl();
    }

private:
    double promien;
};

class Prostopadloscian : public Bryla
{
public:
    Prostopadloscian(double A, double B, double H) : a(A), b(B), h(H){};
    double polePowierzchni() override { return 2 * a * b + (2 * a + 2 * b) * h; }
    double objetosc() override { return a * b * h; }

    void wyswietl()
    {
        cout << "Prostopadloscian:" << endl;
        cout << "a, b, h: " << a << ", " << b << ", " << h << endl;
        Bryla::wyswietl();
    }

private:
    double a, b, h;
};

int main()
{
    Kula k(10.);
    Prostopadloscian p(2., 3., 6.);
    Bryla b;

    k.wyswietl();
    cout << endl;
    p.wyswietl();
    cout << endl;
    b.wyswietl();

    return 0;
}