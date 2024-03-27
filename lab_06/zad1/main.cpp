#include <iostream>
using namespace std;

class Class
{
public:
    int x, y;

    Class(int X, int Y) : x(X), y(Y){};
    Class() = default;

    Class operator+(const Class &o)
    {
        Class result(x + o.x, y + o.y);
        return result;
    };
};

int main()
{
    Class result;
    Class a(4, 8);
    Class b(43, 2);

    result = a + b;

    cout << "Wartosc x: " << result.x << endl;
    cout << "Wartosc y: " << result.y << endl;

    return 0;
}