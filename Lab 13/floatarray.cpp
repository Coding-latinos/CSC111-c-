// This program reads floating point data from a data file and places those
// values into the private data member called values (a floating point array)
// of the FloatList class. Those values are then printed to the screen.
// The input is done by a member function called GetList. The output
// is done by a member function called PrintList. The amount of data read in
// is stored in the private data member called length. The member function
// GetList is called first so that length can be initialized to zero.

// Erik Ocampo

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

const int MAX_LENGTH = 50;

class FloatList
{
public:
    void getList(ifstream& inFile);
    void printList() const;

    FloatList();
    ~FloatList();

private:
    int length;
    float values[MAX_LENGTH];
};

FloatList::FloatList()
{
    length = 0;
}

FloatList::~FloatList()
{
    // Destructor implementation (if needed)
}

void FloatList::getList(ifstream& inFile)
{
    length = 0;

    while (inFile >> values[length])
    {
        length++;
    }
}

void FloatList::printList() const
{
    float sum = 0;
    for (int i = 0; i < length; i++)
    {
        cout << values[i] << " ";
        sum += values[i];
    }
    cout << endl;

    float average = sum / length;
    cout << "The average temperature is " << average << endl;
}

int main()
{
    ifstream tempData;
    FloatList list;

    cout << fixed << showpoint;
    cout << setprecision(2);

    tempData.open("temperatures.txt");

    if (!tempData)
    {
        cout << "Error opening the file." << endl;
        return 1;
    }

    list.getList(tempData);
    list.printList();

    tempData.close();

    return 0;
}
