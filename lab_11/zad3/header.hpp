#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

template <typename T>
void printArray(T arr[], int size)
{
    for (int i = 0; i < size; i++)
        (i + 1 == size) ? cout << arr[i] : cout << arr[i] << ", ";

    cout << endl;
}

#endif