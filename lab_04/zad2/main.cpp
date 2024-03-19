#include <iostream>
#include "header.h"

using namespace std;

int main()
{
    TKlasa klasa;
    TZaprzyjazniona_klasa zaprzyjazniona_klasa;

    cout << "Wart pocz:         " << zaprzyjazniona_klasa.get_TKlasa_value(klasa) << endl;

    cout << "Wart po zmianie:   " << zaprzyjazniona_klasa.set_TKlasa_value(5, klasa) << endl;

    cout << "Funkcja:           " << f_zaprzyjazniona(13, klasa) << endl;

    return 0;
}