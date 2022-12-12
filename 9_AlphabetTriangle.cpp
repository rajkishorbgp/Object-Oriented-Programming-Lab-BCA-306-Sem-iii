/*
                    program: 9
    Write a program in C++ Program to Print Alphabet Triangle.

            A
           B C
          D E F
         G H I J
        K L M N O
*/

#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    n = 5;
    char a = 'A';
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        for (j = 0; j <= i; j++)
        {
            cout << a++ << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
    Output:
        A
       B C
      D E F
     G H I J
    K L M N O
*/