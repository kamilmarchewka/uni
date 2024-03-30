#ifndef HEADER_HPP
#define HEADER_HPP

#include <iostream>
using namespace std;

template <class T>
class Tablica
{
public:
    Tablica(T *ARR, T SIZE) : size(SIZE), arr(ARR){};

    int max();
    int min();

private:
    int size;
    T *arr;
};

template <class T>
int Tablica<T>::max()
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}

template <class T>
int Tablica<T>::min()
{
    int min = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] < min)
            min = arr[i];
    return min;
}

#endif