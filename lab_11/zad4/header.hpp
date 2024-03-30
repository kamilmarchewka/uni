#ifndef HEADER_HPP
#define HEADER_HPP

#include <iostream>
using namespace std;

class Tablica
{
public:
    Tablica(int *ARR, int SIZE) : size(SIZE), arr(ARR){};

    int max();
    int min();

private:
    int size;
    int *arr;
};

#endif