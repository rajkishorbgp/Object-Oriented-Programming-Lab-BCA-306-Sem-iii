/*
                        Program: 17
    Write a C++ program to print reverse of any given number using Class.
           [ Example: i/p=2345 o/p=5432 ]
*/

#include <iostream>
using namespace std;

int main()
{
    int num, r, rev = 0;
    cout << "Enter any integer number: ";
    cin >> num;

    while (num)
    {
        r = num % 10;
        rev = rev * 10 + r;
        num = num / 10;
    }
    cout << "reverse number: " << rev;

    return 0;
}

/*
    Output:
    Enter any integer number: 2345
    reverse number: 5432
*/