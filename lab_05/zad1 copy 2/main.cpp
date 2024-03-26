#include <iostream>
#include "header.h"

int main()
{
    TSamochod *s = new TSamochod("BMW", 300, 700);
    std::cout << *s << std::endl;
    delete s;

    return 0;
}