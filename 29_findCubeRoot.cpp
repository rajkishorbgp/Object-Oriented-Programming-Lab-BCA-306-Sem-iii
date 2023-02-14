/*
                    Program: 29
    Write a program in C++ Program to find Cube Root of Number.
*/

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double num, result;
    cout << "Enter a number: ";
    cin >> num;
    result = cbrt(num);
    cout << "The cube root of " << num << " is " << result << endl;

    return 0;
}

/*
    Output:
    Enter a number: 27
    The cube root of 27 is 3
*/