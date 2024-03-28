#include <iostream>
#include <cmath>
using namespace std;

template <typename T = int>
class Kula
{
public:
    Kula(T R = 2) : promien(R){};

    T polePowierzchni() { return 4 * M_PI * promien * promien; }
    T objetosc() { return 4 / 3 * M_PI * pow(promien, 3); }
    void wypisz()
    {
        cout << "Kula:" << endl;
        cout << "PP: " << polePowierzchni() << endl;
        cout << "V:   " << objetosc() << endl;
    }

private:
    T promien;
};

int main()
{
    Kula<> kInt;
    Kula<float> kFloat(4.32);
    Kula<double> kDouble(0.321211112042);

    kInt.wypisz();
    cout << endl;
    kFloat.wypisz();
    cout << endl;
    kDouble.wypisz();

    return 0;
}