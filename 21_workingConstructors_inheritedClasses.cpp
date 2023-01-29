/*
                                Program: 21
    Write a C++ program to show the working of constructors along in inherited classes.
*/

#include <iostream>
using namespace std;

class A
{
public:
    int a;
    A(int a)
    {
        this->a = a;
    }
};

class B : public A
{
public:
    int b;
    B(int b, int a) : A(a)
    {
        this->b = b;
    }
};

class C : public B
{
public:
    int c;
    C(int a, int b, int c) : B(b, a)
    {
        this->c = c;
    }
};

int main()
{
    C c1(5, 10, 15);
    cout << "a= " << c1.a << endl;
    cout << "b= " << c1.b << endl;
    cout << "c= " << c1.c << endl;
    return 0;
}

/*
    Output:
    a= 5
    b= 10
    c= 15
*/