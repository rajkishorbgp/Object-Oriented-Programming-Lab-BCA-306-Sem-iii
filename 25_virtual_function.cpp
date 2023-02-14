/*
                Program: 25
    Write a program in C++ to the virtual function with the help of inheritance
*/
#include <iostream>
using namespace std;
class Animal
{
public:
    virtual void make_sound()
    {
        cout << "Some generic animal sound" << endl;
    }
};

class Dog : public Animal
{
public:
    void make_sound()
    {
        cout << "Bark!" << endl;
    }
};

int main()
{
    Animal *animal, a1;
    animal = new Dog;
    animal->make_sound();

    a1.make_sound();

    return 0;
}

/*
    Output:
    Bark!
    Some generic animal sound
*/