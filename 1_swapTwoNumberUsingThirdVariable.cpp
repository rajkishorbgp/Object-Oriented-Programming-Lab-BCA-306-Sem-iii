/*
                    @program : 1.
        Write a C++ Program to swap Two Numbers without using third variable.
*/

#include <iostream>
using namespace std;

int main()
{
     int a, b, c;
     cout << "Enter the value a= ";
     cin >> a;
     cout << "Enter the value b= ";
     cin >> b;
     cout << "Befour swap the value " << endl;
     cout << "a= " << a << endl;
     cout << "b= " << b << endl;
     a = a + b;
     b = a - b;
     a = a - b;
     cout << "After swap the value " << endl;
     cout << "a= " << a << endl;
     cout << "b= " << b << endl;
}

/*
Output:
Enter the value a= 5
Enter the value b= 8
Befour swap the value
a= 5
b= 8
After swap the value
a= 8
b= 5
*/