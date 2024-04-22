#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream Plik;
    Plik.open("dane.txt");

    if (!Plik.is_open() || !Plik.good())
        return -1;

    string text;
    while (getline(Plik, text))
        cout << text << endl;

    Plik.close();

    return 0;
}