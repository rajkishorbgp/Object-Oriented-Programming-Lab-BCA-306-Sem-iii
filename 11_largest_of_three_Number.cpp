/*
                    Program: 11
    Write a program in C++ that finds largest of three numbers.
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter any three integer number: ";
    cin >> a >> b >> c;
    if (a > b)
    {
        if (a > c)
        {
            cout << a << " is largest." << endl;
        }
        else
        {
            cout << c << " is largest." << endl;
        }
    }
    else if (b > c)
    {
        cout << b << " is largest." << endl;
    }
    else
    {
        cout << c << " is largest." << endl;
    }
    return 0;
}

/*
    Output:
    Enter any three integer number: 4 5 2
    5 is largest.
*/