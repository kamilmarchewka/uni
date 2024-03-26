#include <iostream>
#include "header.h"

using namespace std;

int main()
{
    Fahrenheit f1(42);
    int k1 = f1;

    cout << "F:  " << f1.temperaturaFahrenheit << endl;
    cout << "K:  " << k1 << endl;

    return 0;
}