#include <iostream>
#include <cmath>
using namespace std;

template <typename T, int rozmiar>
class Tablica
{
public:
    Tablica(T values[])
    {
        elementyWsk = new T[rozmiar];
        for (int i = 0; i < rozmiar; i++)
        {
            elementyWsk[i] = values[i];
        }
    };
    ~Tablica()
    {
        delete[] elementyWsk;
    }

    void wypiszEl()
    {
        for (int i = 0; i < rozmiar; i++)
            cout << elementyWsk[i] << endl;
    }

private:
    T *elementyWsk{nullptr};
};

int main()
{
    int intValues[5] = {1, 4, 3, 2, 6};
    Tablica<int, 5> tablicaInt(intValues);

    float floatValus[7] = {3.5, 7.86, 2.3, 1.11, 2.9, 4.8876, 2};
    Tablica<float, 7> tablicaFloat(floatValus);

    tablicaInt.wypiszEl();
    cout << endl;
    tablicaFloat.wypiszEl();

    return 0;
}