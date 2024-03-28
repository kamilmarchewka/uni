#include <iostream>
#include <cmath>
using namespace std;

template <typename T>
class Prostopadloscian
{
public:
    Prostopadloscian(T A, T B, T H) : a(A), b(B), h(H){};
    T poleProstopadloscianu() const;

private:
    T a, b, h;
};

template <typename T>
T Prostopadloscian<T>::poleProstopadloscianu() const { return a * b * 2 + (2 * a + 2 * b) * h; }

int main()
{
    Prostopadloscian<int> prostopadloscianInt(3, 2, 6);
    Prostopadloscian<float> prostopadloscianFloat(3.2, 5.4, 0.2);
    Prostopadloscian<double> prostopadloscianDouble(0.003030001, 0.55212391293, 12412.123142);

    cout << "Int: " << prostopadloscianInt.poleProstopadloscianu() << endl;
    cout << "Float: " << prostopadloscianFloat.poleProstopadloscianu() << endl;
    cout << "Double: " << prostopadloscianDouble.poleProstopadloscianu() << endl;

    return 0;
}