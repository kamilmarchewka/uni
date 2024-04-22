#ifndef HEADER_H
#define HEADER_H

#include <iostream>

class TStoneWeight
{
    const int iloscFuntowNaKamien = 14;
    int iloscKamieni;
    double resztaWFuntach;
    double masaWFuntach;

public:
    TStoneWeight() : iloscKamieni(0), resztaWFuntach(0), masaWFuntach(0){};
    TStoneWeight(double N_FUNTOW);
    TStoneWeight(double N_FUNTOW, int N_KAMIENI);

    void pokazMaseWKamieniach();
    void pokazMaseWFuntach();
};

#endif