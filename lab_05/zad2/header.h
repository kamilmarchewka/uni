#ifndef HEADER_H
#define HEADER_H

#include <iostream>

class TZespolona
{
    friend void pokaz(TZespolona);

public:
    TZespolona(double RE = 0, double IM = 0) : re(RE), im(IM){};

private:
    double re;
    double im;
};

void pokaz(TZespolona);

#endif