#include <iostream>
using namespace std;

class A
{
protected:
    void printA() { cout << "Klasa A, metoda printA" << endl; }
};
class B
{
protected:
    void printB() { cout << "Klasa B, metoda printB" << endl; }
};
class C
{
protected:
    void printC() { cout << "Klasa C, metoda printC" << endl; }
};

class Z : public A, public B, public C
{
public:
    void printZ()
    {
        printA();
        printB();
        printC();
    };
};

int main()
{
    Z z;
    z.printZ();

    return 0;
}