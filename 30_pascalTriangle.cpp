/*
                Program: 30
    Write a program in C++ to print the Pascal’s triangle.
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the row: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num = 1;
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        for (int k = 0; k <= i; k++)
        {
            cout << num << " ";
            num = num * (i - k) / (k + 1);
        }
        cout << endl;
    }

    return 0;
}

/*
    Output:
    Enter the row: 5
        1
       1 1
      1 2 1
     1 3 3 1
    1 4 6 4 1

*/