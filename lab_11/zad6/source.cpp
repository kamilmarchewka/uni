#include "header.hpp"

MyClass &MyClass::operator=(const MyClass &oClass)
{
    value = oClass.value;
    return *this;
}

int MyClass::getValue() const
{
    return value;
}