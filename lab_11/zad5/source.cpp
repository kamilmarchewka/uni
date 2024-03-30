#include "header.hpp"

void Osoba::wypiszDane() const
{
    cout << imie << " " << nazwisko << ", " << wiek << " lat" << endl;
}

void Kadra::wypiszDane() const
{
    Osoba::wypiszDane();
    cout << wyksztalcenie << endl;
}