/*
                    @program: 19
    Write a C++ Program to show Overload Constructor Example.
*/

#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int rollNo;

    Student(string name, int rollNo)
    {
        this->name = name;
        this->rollNo = rollNo;
        cout << "First Constructor called." << endl;
    }

    Student(int rollNo, string name)
    {
        this->rollNo = rollNo;
        this->name = name;
        cout << "Second Constructor called." << endl;
    }
};

int main()
{
    Student s1("Raj", 95);

    cout << "Name: " << s1.name << endl;
    cout << "Roll no: " << s1.rollNo << endl;

    cout << endl;
    Student s2(6095, "RajKishor");

    cout << "Name: " << s2.name << endl;
    cout << "Roll no: " << s2.rollNo << endl;

    return 0;
}

/*
    Output:

    First Constructor called.
    Name: Raj
    Roll no: 95

    Second Constructor called.
    Name: RajKishor
    Roll no: 6095
*/