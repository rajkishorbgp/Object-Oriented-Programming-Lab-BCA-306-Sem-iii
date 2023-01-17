/*
                        Program: 20
    Write a C++ program to show the use of friend functions.
*/

#include <iostream>
using namespace std;

class complex
{
private:
    int a;
    int b;
    friend complex sumComplex(complex, complex);

public:
    void setComplex(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void printComplex()
    {
        cout << "Complex number is: " << a << " + " << b << "i" << endl;
    }
};

complex sumComplex(complex c1, complex c2)
{
    complex c3;
    c3.setComplex(c1.a + c2.a, c1.b + c2.b);
    return c3;
}

int main()
{
    complex c1, c2;
    c1.setComplex(2, 4);
    c2.setComplex(4, 8);
    c1.printComplex();
    c2.printComplex();

    complex c3 = sumComplex(c1, c2);
    c3.printComplex();
    return 0;
}

/*
    Output:
    Complex number is: 2 + 4i
    Complex number is: 4 + 8i
    Complex number is: 6 + 12i
*/