#ifndef HEADER_HPP
#define HEADER_HPP

#include <iostream>
using namespace std;

class Osoba
{
public:
    Osoba(string I = "Jan", string N = "Nowak", int W = 29) : imie(I), nazwisko(N), wiek(W){};

    virtual void wypiszDane() const;

private:
    string imie, nazwisko;
    int wiek;
};

class Kadra : public Osoba
{
public:
    Kadra(string W, string I = "Piotr", string N = "Kowalski", int Wi = 10) : Osoba(I, N, Wi), wyksztalcenie(W){};

    void wypiszDane() const override;

private:
    string wyksztalcenie;
};

#endif