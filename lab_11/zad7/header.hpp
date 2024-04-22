#ifndef HEADER_HPP
#define HEADER_HPP

#include <iostream>
using namespace std;

class Gora
{
public:
    virtual void wypiszNazwe() const = 0;
};

class Giewont : public Gora
{
    string nazwa{"Giewont"};

public:
    void wypiszNazwe() const override;
};
class Sniezka : public Gora
{
    string nazwa{"Sniezka"};

public:
    void wypiszNazwe() const override;
};

#endif