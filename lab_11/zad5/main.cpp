#include "header.hpp"

int main()
{
    Osoba *osobaPtr{nullptr};

    Osoba osoba1;
    osoba1.wypiszDane();

    Kadra kadra1("wyzsze");
    kadra1.wypiszDane();

    osobaPtr = &kadra1;
    osobaPtr->wypiszDane();

    return 0;
}