/*
            @program: 2
    Write a C++ Program to find all roots of a Quadratic Equation.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a, b, c, d;
    float rootPath, root1, root2, real, imag;
    cout << "Enter the value of a, b and c: ";
    cin >> a >> b >> c;

    d = b * b - 4 * a * c;

    if (d > 0)
    {
        cout << "get two real Solutions" << endl;
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        cout << "R1= " << root1 << endl;
        cout << "R1= " << root2 << endl;
    }
    else if (d == 0)
    {
        cout << "Both roots  are equal" << endl;
        real = -b / (2 * a);
        cout << "Root= " << real;
    }
    else
    {
        cout << "root are imaginary" << endl;
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(-d) / (2 * a);
        cout << "R1 = " << realPart << "+" << imaginaryPart << "i" << endl;
        cout << "R2 = " << realPart << "-" << imaginaryPart << "i" << endl;

        /*      2nd solution
                string imaginaryPart = to_string(sqrt(-d) / (2 * a)) + "i";
                cout << "R1 = " << realPart << "+" << imaginaryPart << endl;
                cout << "R2 = " << realPart << "-" << imaginaryPart << endl;
        */
    }
    return 0;
}

/*
  Output:
Enter the value of a, b and c: 6 7 2
get two real Solutions
R1= -0.5
R1= -0.666667

Enter the value of a, b and c: 2 4 6
root are imaginary
R1 = -1+1.41421i
R2 = -1-1.41421i

*/