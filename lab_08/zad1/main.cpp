#include <iostream>
using namespace std;

class Rodzic
{
public:
    virtual void Metoda() { cout << "Rodzic" << endl; }
};

class Potomek : public Rodzic
{
public:
    virtual void Metoda() override { cout << "Potomek" << endl; }
};

int main()
{
    Rodzic r;
    Potomek p;
    Rodzic *wsk = &p;

    cout << "Zwykle wywolanie: " << endl;
    r.Metoda();
    p.Metoda();
    cout << endl;

    cout << "Przez wskaznik: " << endl;
    wsk->Metoda();
    cout << endl;

    return 0;
}