/*
            @program: 6
    Write a C++ Program to show Constructor and Destructor Example.
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
        cout << "Constructor is called." << endl;
    }
    ~Student()
    {
        cout << "Destructor is called." << endl;
    }
};

int main()
{
    Student s1("Raj Kishor", 95);

    cout << "Name: " << s1.name << endl;
    cout << "Roll no: " << s1.rollNo << endl;

    return 0;
}

/*
    Output:
    Constructor is called.
    Name: Raj Kishor
    Roll no: 95
    Destructor is called.
*/