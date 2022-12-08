/*
 *         @program: 3
 * Write a C++ Program to find Fibonacci Series.
 */

#include <iostream>
using namespace std;

void fibSeries(int n)
{
    int a, b, c;
    a = 0;
    b = 1;
    c = 0;
    for (int i = 0; i < n; i++)
    {
        cout << c << " ";
        c = a + b;
        b = a;
        a = c;
    }
}
int main()
{
    int n;
    cout << "Enter number n: ";
    cin >> n;
    fibSeries(n);
    return 0;
}

/*
   Output:
   Enter number n: 15
   0 1 1 2 3 5 8 13 21 34 55 89 144 233 377
*/