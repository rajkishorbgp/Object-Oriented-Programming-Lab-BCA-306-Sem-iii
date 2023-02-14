/*
                                Program: 26
    Write a program in C++ to declare a class of Vehicle. Derived classes are two-wheelers,
    three wheelers. Display the properties of each type of vehicle using the member functions of class.
*/
#include <iostream>
using namespace std;

class Vehicle
{
public:
    void displayProperties()
    {
        cout << "Vehicle type: Generic" << endl;
    }
};

class TwoWheeler : public Vehicle
{
public:
    void displayProperties()
    {
        cout << "Vehicle type: Two-Wheeler" << endl;
        cout << "Number of wheels: 2" << endl;
    }
};

class ThreeWheeler : public Vehicle
{
public:
    void displayProperties()
    {
        cout << "Vehicle type: Three-Wheeler" << endl;
        cout << "Number of wheels: 3" << endl;
    }
};

int main()
{
    Vehicle vehicle;
    vehicle.displayProperties();

    TwoWheeler twoWheeler;
    twoWheeler.displayProperties();

    ThreeWheeler threeWheeler;
    threeWheeler.displayProperties();

    return 0;
}

/*
    Output:

    Vehicle type: Generic
    Vehicle type: Two-Wheeler
    Number of wheels: 2
    Vehicle type: Three-Wheeler
    Number of wheels: 3
*/