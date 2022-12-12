/*
                    Program: 8
    Write a C++ program to demonstrate an example of single inheritance.
*/

#include <iostream>
using namespace std;

class Animal
{
public:
    int age = 2;
    void speak()
    {
        cout << "Speaking" << endl;
    }
};

class Dog : public Animal
{
public:
    string clore = "Black";
};

int main()
{
    Dog baby;
    cout << baby.age << endl;
    cout << baby.clore << endl;
    baby.speak();

    return 0;
}

/*
    Output:
    2
    Black
    Speaking
*/