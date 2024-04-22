#include <iostream>
#include "header.h"

TStoneWeight::TStoneWeight(double N_FUNTOW)
{
    iloscKamieni = N_FUNTOW / iloscFuntowNaKamien;
    resztaWFuntach = N_FUNTOW - iloscKamieni * iloscFuntowNaKamien;
    masaWFuntach = iloscKamieni * iloscFuntowNaKamien + resztaWFuntach;
}
TStoneWeight::TStoneWeight(double N_FUNTOW, int N_KAMIENI)
{
    iloscKamieni = N_FUNTOW / iloscFuntowNaKamien;
    resztaWFuntach = N_FUNTOW - iloscKamieni * iloscFuntowNaKamien;
    iloscKamieni += N_KAMIENI;
    masaWFuntach = iloscKamieni * iloscFuntowNaKamien + resztaWFuntach;
}

void TStoneWeight::pokazMaseWKamieniach()
{
    std::cout << "Masa w kamieniach: " << iloscKamieni << std::endl;
    std::cout << "Reszta w funtach:  " << resztaWFuntach << std::endl;
}
void TStoneWeight::pokazMaseWFuntach()
{
    std::cout << "Masa w funtach: " << masaWFuntach << std::endl;
}