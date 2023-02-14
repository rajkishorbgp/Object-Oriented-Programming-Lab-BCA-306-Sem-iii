/*
                            Program: 28
    Write a C++ program to illustrate the use of pure virtual function in polymorphism.
*/

#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void draw() = 0;
};

class Circle : public Shape
{
public:
    void draw()
    {
        cout << "Drawing Circle" << endl;
    }
};

class Triangle : public Shape
{
public:
    void draw()
    {
        cout << "Drawing Triangle" << endl;
    }
};

int main()
{
    Shape *ptr = new Circle();
    ptr->draw();

    ptr = new Triangle();
    ptr->draw();

    return 0;
}

/*
    Output:
    Drawing Circle
    Drawing Triangle
*/