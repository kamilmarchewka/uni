#include <iostream>
#include "header.h"

int main()
{
    TZespolona z1;
    TZespolona z2(4);
    TZespolona *z3 = new TZespolona(8);

    pokaz(z1);
    pokaz(z2);
    pokaz(*z3);

    delete z3;
    return 0;
}