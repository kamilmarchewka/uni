#include <iostream>
#include <cmath>
using namespace std;

template <class T>
T poleProstopadloscianu(T a, T b, T h)
{
    return (a * b) * 2 + (2 * a + 2 * b) * h;
}

int main()
{
    cout << "Int: " << poleProstopadloscianu<int>(2, 3, 4) << endl;
    cout << "float: " << poleProstopadloscianu<float>(2.4, 3.3, 4.2) << endl;
    cout << "Double: " << poleProstopadloscianu<double>(2.2, 3.02, 0.004) << endl;

    return 0;
}