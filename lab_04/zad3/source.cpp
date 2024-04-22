#include <iostream>
#include <math.h>
#include "header.h"

// TPunkt
TPunkt::TPunkt(float X, float Y) : x(X), y(Y){};

// TOkrag
TOkrag::TOkrag(float R, float X, float Y) : promien(R), srodek(X, Y){};

bool przecinaja_sie(const TOkrag &o1, const TOkrag &o2)
{
    float roznica_promieni = fabs(o1.promien - o2.promien);
    float odleglosc_srodkow = sqrt((o1.srodek.x - o2.srodek.x) * (o1.srodek.x - o2.srodek.x) + (o1.srodek.y - o2.srodek.y) * (o1.srodek.y - o2.srodek.y));
    float suma_promieni = o1.promien + o2.promien;

    if ((roznica_promieni < odleglosc_srodkow) && (odleglosc_srodkow < suma_promieni))
        return true;

    return false;
}
