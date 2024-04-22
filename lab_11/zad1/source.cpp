#include "header.hpp"

void Biuro::showAddress()
{
    cout << "Adres: " << ulica << " " << nrDomu << endl;
}
void Pracownik::showData()
{
    cout << imie << " " << nazwisko << endl;
    biuro->showAddress();
    cout << endl;
}
void Pracownik::assignOffice(Biuro *B)
{
    biuro = B;
}