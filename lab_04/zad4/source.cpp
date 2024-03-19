#include <iostream>
#include "header.h"

// TTelewizor
TTelewizor::TTelewizor(STATUS STATUS, int ILOSC_KAN) : status(STATUS), maks_liczba_kanalow(ILOSC_KAN), glosnosc(5.), aktualny_kanal(2), tryb(TV_KABLOWA), wejscie(TV){};

bool TTelewizor::Volup()
{
    if (glosnosc < max_glosnosc)
    {
        glosnosc++;
        return true;
    }
    return false;
};
bool TTelewizor::Voldown()
{
    if (glosnosc > 0)
    {
        glosnosc--;
        return true;
    }
    return false;
};
void TTelewizor::Chanup()
{
    if (aktualny_kanal + 1 > maks_liczba_kanalow)
        aktualny_kanal = 0;
    aktualny_kanal++;
};
void TTelewizor::Chandown()
{
    if (aktualny_kanal - 1 < 0)
        aktualny_kanal = maks_liczba_kanalow;
    aktualny_kanal--;
};

void TTelewizor::Drukuj()
{
    std::cout << "Status:       " << status << std::endl;
    std::cout << "Glosnosc:     " << glosnosc << std::endl;
    std::cout << "Kanal:        " << aktualny_kanal << std::endl;
    std::cout << "Tryb:         " << tryb << std::endl;
    std::cout << "Wejscie:      " << wejscie << std::endl
              << std::endl;
};

// TSamochod
