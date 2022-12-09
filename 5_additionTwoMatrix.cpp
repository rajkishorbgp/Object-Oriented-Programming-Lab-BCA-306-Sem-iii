/*
                @program: 5
    Write a C++ Program for addition of Two Matrix.
*/

#include <iostream>
using namespace std;
int main()
{
    int i, j, matrix1[3][3], matrix2[3][3];

    cout << "Enter the 3X3 matrix1: ";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> matrix1[i][j];
        }
    }
    cout << "Enter the 3X3 matrix2: ";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> matrix2[i][j];
        }
    }

    cout << "\nAddition of two matrix..\n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << matrix1[i][j] + matrix2[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
    Output:
    Enter the 3X3 matrix1:
    2 2 2
    3 3 3
    4 4 4
    Enter the 3X3 matrix2:
    3 3 3
    2 2 2
    1 1 1

    Addition of two matrix..
    5 5 5
    5 5 5
    5 5 5
*/