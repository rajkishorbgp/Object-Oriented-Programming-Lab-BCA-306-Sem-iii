/*
                @Program: 7(IMPORTANT QUESTIONS)
WAP in C++ to compute factorial of a number with the use of constructors.
*/

#include <iostream>
using namespace std;

class Factorial
{
public:
    int fact;
    Factorial(int num)
    {
        int i, fact = 1;
        for (i = 2; i <= num; i++)
        {
            fact = fact * i;
        }
        this->fact = fact;
    }
};

int main()
{
    Factorial num1(5), num2(6), num3(7);
    cout << "num1 factorial: " << num1.fact << endl;
    cout << "num2 factorial: " << num2.fact << endl;
    cout << "num3 factorial: " << num3.fact << endl;
    return 0;
}

/*
    Output:
    num1 factorial: 120
    num2 factorial: 720
    num3 factorial: 5040
*/