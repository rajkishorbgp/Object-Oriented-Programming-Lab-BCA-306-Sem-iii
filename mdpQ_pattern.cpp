/*
                    @Program: 8(Modal paper)

WAP in C++ to print following pattern:
                    * * * * *
                    * * * *
                    * * *
                    * *
                    *
*/

#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    n = 5;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

/*
    Output:
    * * * * *
    * * * *
    * * *
    * *
    *
*/