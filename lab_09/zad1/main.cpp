#include <iostream>
using namespace std;

template <typename T> // typename == class
T dodaj(const T &a, const T &b)
{
    return a + b;
}

int main()
{
    string s1 = "Ala ma ", s2 = "kota.";
    int i1 = 4, i2 = 5;
    double d1 = 4.231, d2 = 9.87781;

    cout << dodaj<string>(s1, s2) << endl;
    cout << dodaj<int>(i1, i2) << endl;
    cout << dodaj<double>(d1, d2) << endl;

    return 0;
}