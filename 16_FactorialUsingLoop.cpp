/*                        Program: 16
    Write a program in C++ that finds factorial of a given number using for loop.
*/
#include <iostream>
using namespace std;

int factorial(int data)
{
    int fac = 1;
    for (int i = 2; i <= data; i++)
    {
        fac = fac * i;
    }
    return fac;
}

int main()
{
    int num;
    cout << "Enter any integer number: ";
    cin >> num;
    cout << "Factorial: " << factorial(num);
    return 0;
}

/*
    Output:
    Enter any integer number: 6
    Factorial: 720
*/