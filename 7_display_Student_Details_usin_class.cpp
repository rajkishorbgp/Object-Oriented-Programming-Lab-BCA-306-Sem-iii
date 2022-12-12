/*
               @program: 7
    Write a C++ Program to display Student Details using class.
*/

#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    long long int rollNo;
    string course;
    int marks;
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll no: " << rollNo << endl;
        cout << "Course: " << course << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s1;
    s1.name = "Raj Kishor";
    s1.rollNo = 211110106095;
    s1.course = "BCA";
    s1.marks = 400;

    s1.display();

    return 0;
}

/*
    Output:
    Name: Raj Kishor
    Roll no: 211110106095
    Course: BCA
    Marks: 400
*/