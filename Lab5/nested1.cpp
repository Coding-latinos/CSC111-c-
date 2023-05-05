// This program finds the average time spent programming by a student
// each day over a user-specified period of time.

// Erik Ocampo

#include <iostream>
using namespace std;

int main()
{
    int numStudents;
    int numDays;       // variable to hold the number of days to    consider
    float numHours, total, average;
    int student, day;   // these are the counters for the loops

    cout << "This program will find the average number of hours a day"
         << " that a student spent programming over a specified period of time.\n\n";
    
    cout << "How many students are there ?" << endl << endl;
    cin >> numStudents;

    cout << "How many days should be considered?" << endl << endl;
    cin >> numDays;

    for (student = 1; student <= numStudents; student++)
    {
        total = 0;

        for (day = 1; day <= numDays; day++)    // iterate n times based on user input
        {
            cout << "Please enter the number of hours worked by student "
                 << student << " on day " << day << "." << endl;
            cin >> numHours;

            total = total + numHours;
        }

        average = total / numDays;

        cout << endl;
        cout << "The average number of hours per day spent programming by "
             << "student " << student << " over " << numDays << " days is " << average
             << endl << endl << endl;
    }

    return 0;
}
