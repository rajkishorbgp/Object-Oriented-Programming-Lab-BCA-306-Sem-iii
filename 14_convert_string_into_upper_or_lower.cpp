/*
                        @program: 14
    Write a program in C++ to convert a string of characters into upper or lower case.
*/
#include <iostream>
using namespace std;

int main()
{
    string str;
    int i = 0;
    cout << "Enter the string: ";
    cin >> str;

    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = tolower(str[i]);
        }
        else
        {
            str[i] = toupper(str[i]);
        }
        i++;
    }
    cout << "convert a string: " << str;

    return 0;
}

/*
    Output:
    Enter the string: RajKishor
    convert a string: rAJkISHOR
*/