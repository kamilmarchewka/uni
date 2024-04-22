#ifndef HEADER_H
#define HEADER_H

#include <iostream>

class TUlamek
{
public:
    operator float();

    TUlamek(float, float);
    TUlamek(int);

    float getLicznik();
    float getMianownik();
    void displayUlamek();

private:
    float licznik;
    float mianownik;
};

TUlamek mnozenieUlamkow(TUlamek u1, TUlamek u2);
float kwadrat(TUlamek u);

#endif