#include <iostream>
#include "header.h"

int f_zaprzyjazniona(int a, TKlasa &obj)
{
    obj.nr = a;
    return obj.nr;
};