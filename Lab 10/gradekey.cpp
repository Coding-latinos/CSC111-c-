//Erik Ocampo

#include <fstream>
#include <iostream>
using namespace std;

const int MAXNAME = 20;

int main()
{
    ifstream inData;
    inData.open("grades.txt");

    char name[MAXNAME + 1]; // holds student name
    float average;          // holds student average

    float sum = 0.0; // Variable to store the sum of averages

    while (inData >> name >> average)
    {
        cout << name << " " << "has a(n) " << average << " average"<<endl;

        sum += average;
    }

    inData.close(); // Close the input file

    cout << "Sum of all averages: " << sum << endl;

    return 0;
}

