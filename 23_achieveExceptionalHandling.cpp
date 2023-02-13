/*
                    Program: 23
    Write a C++ program to show how to achieve exceptional handling in C++.
*/

#include <iostream>
using namespace std;
int main()
{
    int a, b, res;
    cout << "Enter the value of a & b (a/b): ";
    cin >> a >> b;
    try
    {
        res = a / b;
        if (res == 0)
        {
            throw 0;
        }

        cout << "Result: " << res << endl;
    }
    catch (int e)
    {
        cout << "Result: " << e << endl;
        cout << "Errer..!!!!!! " << endl;
    }

    return 0;
}

/*
    Output:
    Enter the value of a & b (a/b): 4 6
    Result: 0
    Errer..!!!!!!
*/