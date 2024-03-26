#include <iostream>
#include "header.h"

TStoneWeight::TStoneWeight(double M_FUNTY) : masaWFuntach(M_FUNTY), masaWKamieniach(0)
{
    masaWKamieniach = M_FUNTY / funtyNaKamien;
    resztaWFuntach = M_FUNTY - masaWKamieniach * funtyNaKamien;
};

void TStoneWeight::pokazMaseWFuntach()
{
    std::cout << "Masa w funtach: " << masaWFuntach << std::endl;
}

void TStoneWeight::pokazMaseWKamieniach()
{
    std::cout << "Masa w kamieniach: " << masaWKamieniach << std::endl;
    std::cout << "Reszta w funtach: " << resztaWFuntach << std::endl;
}