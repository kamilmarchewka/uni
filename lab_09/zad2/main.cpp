#include <iostream>
#include <cmath>
using namespace std;

template <typename T>
T Max(const T a, const T b) { return a > b ? a : b; }

int main()
{
    cout << Max<int>(2, 3) << endl;
    cout << Max<float>(0.032, 0.03) << endl;

    return 0;
}