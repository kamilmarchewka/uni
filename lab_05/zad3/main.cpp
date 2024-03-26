#include <iostream>
#include "header.h"

int main()
{
    TStoneWeight s1;
    TStoneWeight s2(30);
    TStoneWeight s3(40, 20);

    s1.pokazMaseWFuntach();
    s1.pokazMaseWKamieniach();
    std::cout << std::endl;
    s2.pokazMaseWFuntach();
    s2.pokazMaseWKamieniach();
    std::cout << std::endl;
    s3.pokazMaseWFuntach();
    s3.pokazMaseWKamieniach();
    return 0;
}