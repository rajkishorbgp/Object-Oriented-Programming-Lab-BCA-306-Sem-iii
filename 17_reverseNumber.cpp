/*
                        Program: 17
    Write a C++ program to print reverse of any given number using Class.
           [ Example: i/p=2345 o/p=5432 ]
*/

#include <iostream>
using namespace std;

class Number
{
public:
    int num;
    int reverse()
    {
        int r, rev = 0;
        while (num)
        {
            r = num % 10;
            rev = rev * 10 + r;
            num = num / 10;
        }
        return rev;
    }
};

int main()
{
    int num;
    cout << "Enter any integer number: ";
    cin >> num;

    Number n1;
    n1.num = num;
    cout << "reverse number: " << n1.reverse();
    return 0;
}

/*
    Output:
    Enter any integer number: 2345
    reverse number: 5432
*/