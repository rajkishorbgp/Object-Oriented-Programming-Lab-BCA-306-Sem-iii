/*
                Program: 12
    Write a program in C++ to find out the power of a number.
*/

#include <iostream>
using namespace std;

int main()
{
    int i = 0, base, power, result = 1;
    cout << "Enter the Base: ";
    cin >> base;
    cout << "Enter the power: ";
    cin >> power;

    while (i < power)
    {
        result = result * base;
        i++;
    }
    cout << base << "^" << power << " = " << result << endl;
    return 0;
}

/*
    Output:
    Enter the Base: 5
    Enter the power: 3
    5^3 = 125
*/