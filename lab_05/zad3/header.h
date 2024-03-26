#ifndef HEADER_H
#define HEADER_H

#include <iostream>

class TStoneWeight
{
public:
    TStoneWeight(double M_FUNTY, int M_KAMIENIE) : masaWFuntach(M_FUNTY), masaWKamieniach(M_KAMIENIE)
    {
        masaWKamieniach = M_FUNTY / funtyNaKamien;
        resztaWFuntach = M_FUNTY - masaWKamieniach * funtyNaKamien;
    };
    TStoneWeight(double M_FUNTY);

    void pokazMaseWFuntach();
    void pokazMaseWKamieniach();

private:
    const int funtyNaKamien = 14;
    const double kgNaKamien = 6.3;

    int masaWKamieniach;
    double resztaWFuntach;
    double masaWFuntach;
};

#endif