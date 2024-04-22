#include "header.hpp"

int main()
{
    Sniezka sniezka;
    Giewont giewont;
    Gora *goraWsk{nullptr};

    goraWsk = &sniezka;
    goraWsk->wypiszNazwe();
    goraWsk = &giewont;
    goraWsk->wypiszNazwe();

    return 0;
}