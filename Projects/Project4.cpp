#include<iostream>
using namespace std;

int main()
{
    int month;

    cout << "Enter month number (1-12): ";
    cin >> month;

    switch(month)
    {
        case 1:
            cout << "Month: January" << endl;
            cout << "No. of days: 31 days" << endl;
            break;
        case 2:
            cout << "Month: February" << endl;
            cout << "No. of days: 28 or 29 days if leap year" << endl;
            break;
        case 3:
            cout << "Month: March" << endl;
            cout << "No. of days: 31 days" << endl;
            break;
        case 4:
            cout << "Month: April" << endl;
            cout << "No. of days: 30 days" << endl;
            break;
        case 5:
            cout << "Month: May" << endl;
            cout << "No. of days: 31 days" << endl;
            break;
        case 6:
            cout << "Month: June" << endl;
            cout << "No. of days: 30 days" << endl;
            break;
        case 7:
            cout << "Month: July" << endl;
            cout << "No. of days: 31 days" << endl;
            break;
        case 8:
            cout << "Month: August" << endl;
            cout << "No. of days: 31 days" << endl;
            break;
        case 9:
            cout << "Month: September" << endl;
            cout << "No. of days: 30 days" << endl;
            break;
        case 10:
            cout << "Month: October" << endl;
            cout << "No. of days: 31 days" << endl;
            break;
        case 11:
            cout << "Month: November" << endl;
            cout << "No. of days: 30 days" << endl;
            break;
        case 12:
            cout << "Month: December" << endl;
            cout << "No. of days: 31 days" << endl;
            break;
        default:
            cout << "Invalid input! Please enter a month number between 1 and 12." << endl;
    }

    return 0;
}
