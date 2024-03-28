#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream plik;
    plik.open("dane.txt");
    plik << "Kamil" << endl;
    plik << "Marchewka" << endl;
    plik << "1" << endl;

    plik.close();

    return 0;
}