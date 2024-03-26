#include <iostream>
#include "header.h"

TUlamek::TUlamek(float LICZNIK, float MIANOWNIK) : licznik(LICZNIK), mianownik(MIANOWNIK){};
TUlamek::TUlamek(int LICZNIK) : licznik((float)LICZNIK), mianownik(1.){};

float TUlamek::getLicznik() { return licznik; }
float TUlamek::getMianownik() { return mianownik; }
void TUlamek::displayUlamek() { std::cout << licznik << " / " << mianownik << std::endl; }

TUlamek::operator float() { return licznik / mianownik; }

TUlamek mnozenieUlamkow(TUlamek u1, TUlamek u2)
{
    TUlamek result(u1.getLicznik() * u2.getLicznik(), u1.getMianownik() * u2.getMianownik());

    return result;
}

float kwadrat(TUlamek u)
{
    return pow(u.getLicznik() * u.getMianownik(), 2.);
}
