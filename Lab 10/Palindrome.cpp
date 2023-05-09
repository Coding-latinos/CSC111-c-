//Erik Ocampo

#include <iostream>
#include <cstring>
using namespace std;

const int MAX_NAME_LENGTH = 25;

int main() {
    char name1[MAX_NAME_LENGTH + 1];
    char name2[MAX_NAME_LENGTH + 1];

    cout << "Please input the first name: " << endl;
    cin.getline(name1, MAX_NAME_LENGTH + 1);

    cout << "Please input the second name: " << endl;
    cin.getline(name2, MAX_NAME_LENGTH + 1);

    int comparison = strcmp(name1, name2);

    cout << "The names are as follows: " << endl;

    if (comparison < 0) {
        cout << name1 << endl;
        cout << name2 << endl;
    } else if (comparison > 0) {
        cout << name2 << endl;
        cout << name1 << endl;
    } else {
        cout << name1 << endl;
        cout << name2 << endl;
        cout << "Both names are the same." << endl;
    }

    return 0;
}
