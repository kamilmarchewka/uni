#include <iostream>
#include <fstream>
using namespace std;

class Macierz
{
public:
    Macierz()
    {
        macierz = new int[rozmiar * rozmiar];
        for (int i = 0; i < rozmiar * rozmiar; i++)
            macierz[i] = 0;
    }
    Macierz(int TABLICA[100])
    {
        macierz = new int[rozmiar * rozmiar];
        for (int i = 0; i < rozmiar * rozmiar; i++)
        {
            macierz[i] = TABLICA[i];
        }
    };
    ~Macierz()
    {
        delete[] macierz;
    };

    void wczytajMacierz(int arr[100])
    {
        for (int i = 0; i < rozmiar * rozmiar; i++)
        {
            macierz[i] = arr[i];
        }
    };
    void zapiszDaneDoPliku(string path)
    {
        file.open(path);

        for (int i = 0; i < rozmiar; i++)
        {
            for (int j = 0; j < rozmiar; j++)
                file << macierz[i * rozmiar + j];
            file << endl;
        }

        file.close();
    }
    void odczytajDaneZPliku(string path)
    {
        file.open(path);

        if (!file.good())
            cout << "Ops, cos poszlo nie tak." << endl;

        char c;
        int i = 0;
        while (file >> c && i < rozmiar * rozmiar)
        {
            macierz[i] = atoi(&c);
            i++;
        }

        file.close();
    }
    void pokazMacierz()
    {
        for (int i = 0; i < rozmiar; i++)
        {
            for (int j = 0; j < rozmiar; j++)
            {
                cout << macierz[i * rozmiar + j];
            }
            cout << endl;
        }
    }

private:
    fstream file;
    int rozmiar{10};
    int *macierz{nullptr};
};

int main()
{
    int arr[100] = {0};
    // Wypelnienie tablicy
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i == j)
                arr[i * 10 + j] = 1;
        }
    }

    Macierz macierz;
    macierz.pokazMacierz();
    cout << endl;
    macierz.odczytajDaneZPliku("dane.txt");
    macierz.pokazMacierz();
    cout << endl;
    macierz.wczytajMacierz(arr);
    macierz.zapiszDaneDoPliku("dane.txt");
    macierz.odczytajDaneZPliku("dane.txt");
    macierz.pokazMacierz();

    return 0;
}