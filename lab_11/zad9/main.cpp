#include <iostream>
using namespace std;

class Czlowiek
{
public:
    virtual void mow() const = 0;
};

class Mezczyzna : public Czlowiek
{
public:
    void mow() const override
    {
        cout << "Mezczyzna" << endl;
    }
};
class Kobieta : public Czlowiek
{
    void mow() const override
    {
        cout << "Kobieta" << endl;
    }
};

int main()
{
    Mezczyzna m;
    Kobieta k;
    Czlowiek *czlowiekWsk{nullptr};

    czlowiekWsk = &m;
    czlowiekWsk->mow();
    czlowiekWsk = &k;
    czlowiekWsk->mow();
    return 0;
}