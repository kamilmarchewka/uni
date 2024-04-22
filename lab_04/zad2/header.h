#ifndef HEADER_H
#define HEADER_H

#include <iostream>

class TKlasa;
int f_zaprzyjazniona(int a, TKlasa &obj);

class TKlasa
{
    int nr{0};

public:
    friend class TZaprzyjazniona_klasa;
    friend int f_zaprzyjazniona(int, TKlasa &);
};

class TZaprzyjazniona_klasa
{
public:
    int get_TKlasa_value(const TKlasa &obj) { return obj.nr; };
    int set_TKlasa_value(int new_value, TKlasa &obj)
    {
        obj.nr = new_value;
        return obj.nr;
    };
};

#endif