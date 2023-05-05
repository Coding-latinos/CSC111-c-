//Nested2

//Erik Ocampo 

#include <iostream>
using namespace std;

int main()
{
    int numStudents, numDays;
    float numHoursProg, numHoursBio, totalProg, totalBio, avgProg, avgBio; //variable needed for this excercise

    // user input
    cout << "This program will find the average number of hours a day that a student spent programming and studying biology over a period of time.\n\n";
    cout << "How many students are there?" << endl;
    cin >> numStudents;

    cout << "How many days should we consider?" << endl;
    cin >> numDays;

    // Loop through each student
    for (int student = 1; student <= numStudents; student++)
    {
        totalProg = 0;
        totalBio = 0;

        // Loop through each day
        for (int day = 1; day <= numDays; day++)
        {
            // Prompt user for input on hours spent on programming and biology
            cout << "Please enter the number of hours worked by student " << student << " on programming on day " << day << "." << endl;
            cin >> numHoursProg;

            totalProg += numHoursProg;

            cout << "Please enter the number of hours worked by student " << student << " on biology on day " << day << "." << endl;
            cin >> numHoursBio;

            totalBio += numHoursBio;
        }

        // Calculate averages for programming and biology
        avgProg = totalProg / numDays;
        avgBio = totalBio / numDays;

        // Print out the averages and which subject the student spent more time on
        cout << endl;
        cout << "The average number of hours per day spent programming by student " << student << " is " << avgProg << "." << endl;
        cout << "The average number of hours per day spent studying biology by student " << student << " is " << avgBio << "." << endl;

        if (avgProg > avgBio)
        {
            cout << "On average, student " << student << " spent more time programming than studying biology." << endl;
        }
        else if (avgBio > avgProg)
        {
            cout << "On average, student " << student << " spent more time studying biology than programming." << endl;
        }
        else
        {
            cout << "On average, student " << student << " spent the same amount of time on programming and studying biology." << endl;
        }

        cout << endl;
    }

    return 0;
}
