#include "header.hpp"

int main()
{
    MyClass o1(5), o2(20);

    cout << "O1: " << o1.getValue() << endl;
    cout << "O2: " << o2.getValue() << endl;

    o1 = o2;

    cout << endl;
    cout << "O1: " << o1.getValue() << endl;
    cout << "O2: " << o2.getValue() << endl;
}