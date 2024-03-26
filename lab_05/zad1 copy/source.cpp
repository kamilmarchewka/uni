#include <iostream>
#include "header.h"

// TSilnik
TSilnik::TSilnik(int MOC, int MOMENT)
{
    moc = MOC;
    max_moment_obr = MOMENT;
};

std::ostream &operator<<(std::ostream &stream, const TSilnik &s)
{
    stream << "moc:     " << s.moc << std::endl;
    stream << "moment:  " << s.max_moment_obr << std::endl;
    return stream;
};

// TSamochod
TSamochod::TSamochod(std::string MODEL, int MOC, int MOMENT) : model(MODEL), silnik(MOC, MOMENT){};

std::ostream &operator<<(std::ostream &stream, const TSamochod &s)
{
    stream << "model:    " << s.model << std::endl;
    stream << s.silnik << std::endl;
    return stream;
};