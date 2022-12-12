/*
                            Program: 13
    Write a program in C++ to find the vowels in the string provided by the users.
*/

#include <iostream>
using namespace std;

int main()
{
    string str;
    int i, vowels = 0;
    cout << "Enter the string: ";
    cin >> str;

    for (i = 0; i < str[i]; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            vowels++;
        }
    }
    cout << vowels << " vowels in the string";

    return 0;
}

/*
    Output:
    Enter the string: rajkishor
    3 vowels in the string
*/