#include <iostream>
using namespace std;

class Punkt2D
{
    friend ostream &operator<<(ostream &os, const Punkt2D &p);
    friend istream &operator>>(istream &is, Punkt2D &p);

    int x,
        y;

public:
    Punkt2D(int X = 0, int Y = 0) : x(X), y(Y){};
};

ostream &operator<<(ostream &os, const Punkt2D &p)
{
    os << "Punkt: (" << p.x << "," << p.y << ")" << endl;
    return os;
}
istream &operator>>(istream &is, Punkt2D &p)
{
    is >> p.x >> p.y;
    return is;
}

int main()
{
    Punkt2D p1(3, 6);
    Punkt2D p2;

    cout << p1;

    cout << "Wczytaj wsp. drugiego punktu: ";
    cin >> p2;

    cout << p2;

    return 0;
}