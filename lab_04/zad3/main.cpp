#include <iostream>
#include "header.h"

int main()
{
    TOkrag o1(2., 0., 0.);
    TOkrag o2(2., 3., 0.);

    std::cout << przecinaja_sie(o1, o2) << std::endl;
    return 0;
}