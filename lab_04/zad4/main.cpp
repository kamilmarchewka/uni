#include <iostream>
#include "header.h"

int main()
{
    TTelewizor tv_salon(OFF, 13), tv_kuchnia(OFF, 21);

    TPilot pilot;

    tv_salon.Drukuj();
    pilot.Chandown(tv_salon);
    pilot.Volup(tv_salon);
    tv_salon.Drukuj();

    std::cout << "-----------------" << std::endl;
    tv_kuchnia.Drukuj();
    pilot.Chanup(tv_kuchnia);
    pilot.Voldown(tv_kuchnia);
    pilot.OnOff(tv_kuchnia);
    tv_kuchnia.Drukuj();

    return 0;
}