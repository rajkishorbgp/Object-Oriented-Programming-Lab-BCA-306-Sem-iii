/*
                    program: 10
    Write a program in C++ to count word in a sentence.
*/

#include <iostream>
using namespace std;

int main()
{
    int i = 0, count = 0;
    string sentence;

    cout << "Enter thr sentence: ";
    getline(cin, sentence);

    while (sentence[i])
    {
        if (sentence[i] == ' ')
        {
            count++;
        }
        i++;
    }
    count++;
    cout << count << " word is present in a sentence." << endl;

    return 0;
}

/*
    Output:
    Enter thr sentence: Write a program in C++ to count word in a sentence.
    11 word is present in a sentence.
*/