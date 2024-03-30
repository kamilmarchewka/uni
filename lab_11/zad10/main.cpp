#include <iostream>
#include <random>
using namespace std;

class Animal
{
public:
    virtual void makeSound() const = 0;
};

class Dog : public Animal
{
public:
    void makeSound() const override
    {
        cout << "Hau" << endl;
    }
};
class Cat : public Animal
{
    void makeSound() const override
    {
        cout << "Miau" << endl;
    }
};

int main()
{
    random_device rd;
    mt19937 g(rd());

    Dog d;
    Cat c;
    vector<Animal *> animals{&d, &c, &d, &c};
    for (int i = 0; i < 3; i++)
    {
        shuffle(begin(animals), end(animals), g);
        for (Animal *animal : animals)
            animal->makeSound();
        cout << endl;
    }

    return 0;
}