/*
                @Program: 15
    Write a C++ Program to display current data and time.
*/

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    time_t timetoday;
    time(&timetoday);
    cout << "Calendar date and time as par today is : " << asctime(localtime(&timetoday));
    return 0;
}

/*
    Output:
    Calendar date and time as par today is : Tue Dec 20 11:58:46 2022
*/