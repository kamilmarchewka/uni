#include <iostream>
#include <cmath>
using namespace std;

class Ksztalt
{
public:
    virtual void obliczPole() = 0;
};

class Kolo : public Ksztalt
{
public:
    Kolo(float R) : r(R) {}
    void obliczPole() override { cout << "Pole kola: " << M_PI * r * r << endl; }

private:
    float r;
};

class Kwadrat : public Ksztalt
{
public:
    Kwadrat(float A) : a(A){};
    void obliczPole() override { cout << "Pole kwadratu: " << a * a << endl; }

private:
    float a;
};

int main()
{
    Kolo kolo(3);
    Kwadrat kwadrat(6);

    Ksztalt *ksztaltWsk = nullptr;

    ksztaltWsk = &kolo;
    ksztaltWsk->obliczPole();

    ksztaltWsk = &kwadrat;
    ksztaltWsk->obliczPole();

    return 0;
}