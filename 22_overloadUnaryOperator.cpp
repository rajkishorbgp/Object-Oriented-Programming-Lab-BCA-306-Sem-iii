/*
                    Program: 22
    Write a C++ program to overload unary + and unary operator.
*/
#include <iostream>
using namespace std;
class Number
{
public:
    int a;

    Number operator+()
    {
        a = -a;
        cout << "Overload unary + operator" << endl;
    }
};
int main()
{
    Number n1;
    n1.a = 8;
    +n1;
    cout << "a: " << n1.a << endl;
    return 0;
}

/*
    Output:
    Overload unary + operator
    a: -8
*/