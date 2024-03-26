#include <iostream>

#include "header.h"

int main()
{
    TUlamek u1(1, 5);
    TUlamek u2(2, 5);

    std::cout << "U1: ";
    u1.displayUlamek();
    std::cout << "U2: ";
    u2.displayUlamek();

    TUlamek wynik = mnozenieUlamkow(u1, u2);
    std::cout << "Mnozenie 2 ulamkow: " << std::endl;
    wynik.displayUlamek();

    wynik = mnozenieUlamkow(u1, TUlamek(10));
    std::cout << std::endl
              << "Mnozenie ulamka i 10: " << std::endl;
    wynik.displayUlamek();

    wynik = kwadrat(u2);
    std::cout << std::endl
              << "Kwadrat: " << std::endl;
    wynik.displayUlamek();

    return 0;
}