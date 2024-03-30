#ifndef HEADER_HPP
#define HEADER_HPP

#include <iostream>
using namespace std;

class MyClass
{
    int value;

public:
    MyClass &operator=(const MyClass &);

    MyClass(int V) : value(V){};

    int getValue() const;
};

#endif