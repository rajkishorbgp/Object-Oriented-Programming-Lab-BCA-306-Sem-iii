/*
            @program: 4
    Write a C++ Program to Check given number is Prime number or not.
*/

#include <iostream>
using namespace std;

bool isPrime(int num)
{
    if (num < 2)
    {
        return false;
    }

    for (int i = 2; i < num / 2; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter any integer number: ";
    cin >> n;
    if (isPrime(n))
    {
        cout << n << " is a prime number" << endl;
    }
    else
    {
        cout << n << " is a not prime number" << endl;
    }
    return 0;
}

/*
    Output:
    Enter any integer number: 7
    7 is a prime number
*/