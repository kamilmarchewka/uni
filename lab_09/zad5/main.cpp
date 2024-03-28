#include <iostream>
#include <cmath>
using namespace std;

template <typename T, int rozmiar = 5>
class Tablica
{
public:
    Tablica(T elementy[])
    {
        wsk = new T[rozmiar];
        for (int i = 0; i < rozmiar; i++)
        {
            wsk[i] = elementy[i];
        }
    };
    ~Tablica()
    {
        delete[] wsk;
    };
    T sumaEl()
    {
        T suma = 0;
        for (int i = 0; i < rozmiar; i++)
            suma += wsk[i];

        return suma;
    };

private:
    T *wsk{nullptr};
};

int main()
{
    Tablica<float, 3> liczby((float[3]){2.3, 3.008, 0.2});
    cout << liczby.sumaEl() << endl;

    return 0;
}