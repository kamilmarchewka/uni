#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string plikName = "wizytowka.txt";
    fstream Plik(plikName);

    // Jezeli plik nie dziala
    if (!Plik.good())
        cout << plikName << " nie istnieje" << endl;

    string line;
    while (getline(Plik, line))
    {
        // Sprawdzenie czy linia zawiera znak "|"
        char skipChar = line.find('-');
        if (skipChar != string::npos) // jezeli find nie znajdzie, to zwraca wartosc npos
        {
            // Jezeli znaleziono, przechodzimy do nastepnej linii
            continue;
        }

        // Usunięcie "|"
        line.erase(remove_if(line.begin(), line.end(), [](char c)
                             { return c == '|'; }),
                   line.end());

        cout << line << endl;
    }

    return 0;
}