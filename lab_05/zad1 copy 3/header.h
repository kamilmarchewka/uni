#ifndef HEADER_H
#define HEADER_H

#include <iostream>

class TSilnik
{
    int moc, max_moment_obr;

public:
    friend std::ostream &operator<<(std::ostream &, const TSilnik &);
    TSilnik(int, int);
};

class TSamochod
{
    TSilnik silnik;
    std::string model;

public:
    friend class TSilnik;
    friend std::ostream &operator<<(std::ostream &, const TSamochod &);

    TSamochod(std::string, int, int);
};

#endif