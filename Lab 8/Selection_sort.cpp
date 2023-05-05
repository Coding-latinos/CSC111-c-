// This program uses a selection sort to arrange an array of integers in
// ascending order

// Erik Ocampo

#include <iostream>
using namespace std;

// function prototypes
void selectionSortArray(int[], int);
void displayArray(int[], int);

const int SIZE = 5;

int main()
{
    int values[SIZE] = { 9, 2, 0, 11, 5 };

    cout << "The values before the selection sort is performed are:" << endl;
    displayArray(values, SIZE);

    selectionSortArray(values, SIZE);

    cout << "The values after the selection sort is performed are:" << endl;
    displayArray(values, SIZE);

    return 0;
}

//******************************************************************
//  displayArray
//
//  task:       to print the array
//  data in:    the array to be printed, the array size
//  data out:   none
//
//******************************************************************

void displayArray(int array[], int elems)
{
    for (int count = 0; count < elems; count++)
        cout << array[count] << " ";
    cout << endl;
}

void selectionSortArray(int array[], int elems)
{
    int seek;       // array position currently being put in order 
    int maxCount;   // location of largest value found
    int maxValue;   // holds the largest value found

    for (seek = 0; seek < (elems - 1); seek++)   // outer loop performs the swap
                                                // and then increments seek
    {
        maxCount = seek;
        maxValue = array[seek];

        for (int index = seek + 1; index < elems; index++)
        {
            // inner loop searches through array
            // starting at array[seek] searching
            // for the largest value. When the
            // value is found, the subscript is
            // stored in maxCount. The value is
            // stored in maxValue.

            if (array[index] < maxValue)
            {
                maxValue = array[index];
                maxCount = index;
            }
        }

        // the following two statements exchange the value of the
        // element currently needing the smallest value found in the
        // pass (indicated by seek) with the smallest value found
        // (located in maxValue)

        array[maxCount] = array[seek];
        array[seek] = maxValue;

        // print the current state of the array
        cout << "Array after iteration " << seek << ": ";
        displayArray(array, SIZE);
    }
}
