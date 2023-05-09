#include <iostream>
using namespace std;

//Erik Ocampo

const int MAX_LAST_NAME = 10;

int main()
{
    char last[MAX_LAST_NAME];

    cout << "Enter your last name (up to 9 characters): ";
    cin.getline(last, MAX_LAST_NAME);

    cout << "Your last name is: " << last << endl;

    return 0;
}
