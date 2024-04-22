#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

struct Biuro
{
    string ulica;
    int nrDomu;

    void showAddress();
};

class Pracownik
{
    string imie, nazwisko;
    Biuro *biuro{nullptr};

public:
    Pracownik(string I, string N) : imie(I), nazwisko(N){};

    void showData();
    void assignOffice(Biuro *B);
};

#endif