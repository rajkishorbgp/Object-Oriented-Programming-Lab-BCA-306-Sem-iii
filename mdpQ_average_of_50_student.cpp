/*
                    @Program: 7(Modal paper)
    WAP in C++ to compute the average marks of 50 students in the class.
    Take necessary assumptions.
*/

#include <iostream>
using namespace std;
class Marks
{
public:
    int total;
    int num_Student;
    int average()
    {
        return total / num_Student;
    }
};

int main()
{
    Marks list;

    int student_num = 50;
    int *marks = new int[student_num];
    int total = 0;

    cout << "Enter the 50 student marks: ";
    for (int i = 0; i < student_num; i++)
    {
        cin >> marks[i];
    }

    // total marks
    for (int i = 0; i < student_num; i++)
    {
        total += marks[i];
    }
    list.total = total;
    list.num_Student = student_num;

    cout << "Average marks: " << list.average() << "%" << endl;
    return 0;
}

/*
    Output:
    Enter the 50 student marks: 70 80 70 60 50 56 57 58 95 85 76 97 68 67 56 47 65 48 75 59 47
    65 59 59 95 85 75 94 75 43 45 43 73 74 75 76 86 86 38 50 59 74 69 70 70 59 40 50 60 70
    Average marks: 66%
*/