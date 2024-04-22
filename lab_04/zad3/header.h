#ifndef HEADER_H
#define HEADER_H

#include <iostream>

struct TPunkt
{
    float x, y;
    TPunkt(float, float);
};

class TOkrag
{
    float promien;
    TPunkt srodek;

public:
    friend bool przecinaja_sie(const TOkrag &, const TOkrag &);
    TOkrag(float, float, float);
};

bool przecinaja_sie(const TOkrag &, const TOkrag &);

#endif