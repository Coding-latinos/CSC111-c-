//Kimberly Guallpa
#include <iostream>

using namespace std;

int main() {
    int K;
    cout << "Please input the number of id numbers to be read" << endl;
    cin >> K;

    int *arr = new int[K];
    for (int i = 0; i < K; ++i) {
        cout << "Please enter an id number" << endl;
        cin >> arr[i];
    }

    int id;
    cout << "\nPlease input an id number to be searched" << endl;
    cin >> id;
    bool found = false;
    for (int i = 0; i < K; ++i) {
        if (arr[i] == id) {
            found = true;
        }
    }
    if (found) {
        cout << id << " is in the array" << endl;
    } else {
        cout << id << " is not in the array" << endl;
    }
    delete[] arr;
    return 0;
}