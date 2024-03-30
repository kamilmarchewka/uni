#include "header.hpp"

int main()
{
    Biuro *biuro = new Biuro;
    biuro->ulica = "Czekoladowa";
    biuro->nrDomu = 10;

    Pracownik p1("Jan", "Kowalski"), p2("Piotr", "Nowak");

    p1.assignOffice(biuro);
    p2.assignOffice(biuro);

    p1.showData();
    p2.showData();

    biuro->ulica = "Nowy Swiat";
    biuro->nrDomu = 32;

    p1.showData();
    p2.showData();

    delete biuro;
    return 0;
}