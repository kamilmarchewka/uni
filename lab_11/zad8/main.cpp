#include "header.hpp"

class Mieszkanie
{

    int kwiaty;

public:
    friend class Przyjaciel;

    Mieszkanie(int K) : kwiaty(K) {}
};

class Przyjaciel
{
public:
    void podlejKwiaty(Mieszkanie &M) const
    {
        cout << "Podlewam " << M.kwiaty << " kwiatow." << endl;
        M.kwiaty++;
    }
};

int main()
{
    Mieszkanie mieszkanie(8);
    Przyjaciel przyjaciel;

    przyjaciel.podlejKwiaty(mieszkanie);
    przyjaciel.podlejKwiaty(mieszkanie);

    return 0;
}