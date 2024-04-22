#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
    string imie, nazwisko;
    int nrTelefonu;

    cout << "Imie: ";
    cin >> imie;
    cout << "Nazwisko: ";
    cin >> nazwisko;
    cout << "Nr telefonu: ";
    cin >> nrTelefonu;

    fstream plik;
    plik.open("wizytowka.txt");

    plik << "----------------------------" << endl;
    plik << "| " << setw(24) << left << imie << " |" << endl;
    plik << "| " << setw(24) << left << nazwisko << " |" << endl;
    plik << "| " << setw(24) << left << nrTelefonu << " |" << endl;
    plik << "----------------------------" << endl;

    plik.close();
    return 0;
}