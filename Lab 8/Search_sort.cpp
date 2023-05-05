//Erik Ocampo

#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

// Function prototypes
void selectionSort(int[], int);
int binarySearch(int[], int, int);
double calculateMean(int[], int);

// Constants
const int MAX_SIZE = 50;

int main() {
    int n;
    int arr[MAX_SIZE];
    int searchValue;

    ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");

    // Read the input data from the file
    inputFile >> n;
    inputFile >> searchValue;
    for (int i = 0; i < n; i++) {
        inputFile >> arr[i];
    }

    // Sort the array using selection sort
    selectionSort(arr, n);

    // Write the sorted array to the output file
    for (int i = 0; i < n; i++) {
        outputFile << arr[i] << " ";
    }
    outputFile << endl;

    // Search for the value using binary search
    int location = binarySearch(arr, n, searchValue);

    // Write the search result to the output file
    if (location == -1) {
        outputFile << searchValue << " is not in the array." << endl;
    } else {
        outputFile << searchValue << " is at position " << location+1 << " in the sorted array." << endl;
    }

    // Calculate the mean of the array
    double mean = calculateMean(arr, n);

    // Write the mean to the output file
    outputFile << "The mean of the array is " << mean << "." << endl;

    inputFile.close();
    outputFile.close();

    return 0;
}

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        int minIndex = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

int binarySearch(int arr[], int n, int value) {
    int left = 0;
    int right = n-1;
    while (left <= right) {
        int middle = (left + right) / 2;
        if (arr[middle] == value) {
            return middle;
        } else if (arr[middle] < value) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }
    return -1;
}

double calculateMean(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return static_cast<double>(sum) / n;
}
