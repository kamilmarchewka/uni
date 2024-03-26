#ifndef HEADER_H
#define HEADER_H

#include <iostream>

class Fahrenheit
{
public:
    int temperaturaFahrenheit;

    operator int()
    {
        double fToK = (temperaturaFahrenheit + 459.67) * 5 / 9;
        return static_cast<int>(fToK);
    }

public:
    Fahrenheit(double celcius)
    {
        double toFahrenheit = 9. / 5. * celcius + 32.;
        temperaturaFahrenheit = static_cast<int>(toFahrenheit);
    }
};

#endif