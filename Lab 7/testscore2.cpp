//Erik Ocampo
#include <iostream>
#include <fstream>
#include <limits> 
using namespace std;

typedef int GradeType[100];  // declares a new data type:
                             // an integer array of 100 elements

float findAverage( const GradeType, int );  // finds average of all grades
int findHighest( const GradeType, int );    // finds highest of all grades
int findLowest( const GradeType, int );     // finds lowest of all grades

int main() {
    GradeType grades;     // the array holding the grades.
    int numberOfGrades;   // the number of grades read.
    int pos;              // index to the array.

    float avgOfGrades;    // contains the average of the grades.
    int highestGrade;     // contains the highest grade.
    int lowestGrade;      // contains the lowest grade.

    ifstream f ("gradfile.txt");

    // Read in the values into the array
    pos = 0;
    while ( pos < 100 and f.good() ) {
        f >> grades[pos];
        pos++;
    }
    pos--; // truncate the size to ignore end of array (-99 or bounds error)

    if ( pos == -1 ) {
        std::cerr << "**Error Opening 'gradfile.txt'**";
        return 1; // error value returned
    }

    numberOfGrades = pos;  // Fill blank with appropriate identifier

    // call to the function to find average
    avgOfGrades = findAverage( grades, numberOfGrades );

    cout << endl << "The average of all the grades is " << avgOfGrades << endl;

    //  Fill in the call to the function that calculates highest grade
    highestGrade = findHighest( grades, numberOfGrades );

    cout << endl << "The highest grade is " << highestGrade << endl;

    // Fill in the call to the function that calculates lowest grade
    lowestGrade = findLowest( grades, numberOfGrades );

    // Fill in code to write the lowest to the screen
    cout << endl << "The lowest grade is " << lowestGrade << endl;

    return 0;
}


//******************************************************************************
//                                 findAverage
//
// task:          This function receives an array of integers and its size.
//                It finds and returns the average of the numbers in the array
// data in:       array of floating point numbers
// data returned: avarage of the numbers in the array
//
//******************************************************************************
float findAverage( const GradeType array, int size ) {
    float sum = 0;  // holds the sum of all the numbers

    for (int pos = 0; pos < size; pos++)
        sum = sum + array[pos];

    return (sum / size);  //returns the average
}


//******************************************************************************
//                                 findHighest
//
// task:          This function receives an array of integers and its size.
//                It finds and returns the highest value of the numbers in
//                the array
// data in:       array of floating point numbers
// data returned: highest value of the numbers in the array
//
//******************************************************************************
int findHighest( const GradeType array, int size ) {
    // Fill in the code for this function
    int max = std::numeric_limits<int>::min(); // start with lowest int

    if ( size == 0 ) {
        std::cerr << "Note: Empty grade list given, INT_MIN returned";
    }

    for ( int i = 0 ; i < size ; i++ )
        if ( array[i] > max)
            max = array[i];

    return max;
}


//******************************************************************************
//                                 findLowest
//
// task:          This function receives an array of integers and its size.
//                It finds and returns the lowest value of the numbers in
//                the array
// data in:       array of floating point numbers
// data returned: lowest value of the numbers in the array
//
//******************************************************************************
int findLowest( const GradeType array, int size ) {
    // Fill in the code for this function
    int min = std::numeric_limits<int>::max(); // start with largest int

    if ( size == 0 ) {
        std::cerr << "Note: Empty grade list given, INT_MAX returned";
    }

    for ( int i = 0 ; i < size ; i++ )
        if ( array[i] < min)
            min = array[i];

    return min;
}