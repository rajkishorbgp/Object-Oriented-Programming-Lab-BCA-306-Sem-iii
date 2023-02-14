/*
                        Program: 27
    Write a C++ program display student mark sheet using multiple inheritance.
*/

#include <iostream>
using namespace std;

class PersonalInformation
{
protected:
    string name;
    int rollNo;

    void DisplayPersonalInformation()
    {
        cout << "Name: " << name << endl;
        cout << "Roll number: " << rollNo << endl;
    }
};

class Marks
{
protected:
    int math;
    int science;
    int english;
    void DisplayMarks()
    {
        cout << "Marks in Math: " << math << endl;
        cout << "Marks in Science: " << science << endl;
        cout << "Marks in English: " << english << endl;
    }
};

class Student : protected PersonalInformation, protected Marks
{
public:
    Student(string name, int rollNo, int math, int science, int english)
    {
        this->name = name;
        this->rollNo = rollNo;

        this->math = math;
        this->science = science;
        this->english = english;
    }
    void DisplayStudentInformation()
    {
        this->DisplayPersonalInformation();
        this->DisplayMarks();
    }
};

int main()
{
    Student student("Raj Kishor", 6095, 95, 90, 85);
    cout << "Student Information:" << endl;
    student.DisplayStudentInformation();
    return 0;
}

/*
    Output:
    Student Information:
    Name: Raj Kishor
    Roll number: 6095
    Marks in Math: 95
    Marks in Science: 90
    Marks in English: 85
*/