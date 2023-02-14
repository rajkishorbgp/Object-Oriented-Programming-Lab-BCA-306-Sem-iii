/*
                    Program: 24
    Write a program in C++ to show the function overriding.
*/
#include <iostream>
using namespace std;
class Animal
{
public:
    void make_sound()
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
    Animal animal;
    animal.make_sound();
    Dog dog;
    dog.make_sound();

    return 0;
}

/*
    Output:
    Some generic animal sound
    Bark!
*/