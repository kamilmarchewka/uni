#include <iostream>
using namespace std;

class Class
{
    int x, y;

public:
    Class(int X, int Y) : x(X), y(Y){};
    Class() = default;

    int getX() { return x; };
    int getY() { return y; };

    Class operator+(const Class &o)
    {
        Class result(x + o.x, y + o.y);
        return result;
    };
};

int main()
{
    Class result;
    Class a(4, 6);
    Class b(40, 2);

    result = a + b;

    cout << "Wartosc x: " << result.getX() << endl;
    cout << "Wartosc y: " << result.getY() << endl;

    return 0;
}