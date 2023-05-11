// This program declares a class called Inventory that has itemnNumber (which
// contains the id number of a product) and numOfItem (which contains the
// quantity on hand of the corresponding product) as private data members.
// The program will read these values from a file and store them in an
// array of objects (of type Inventory). It will then print these values
// to the screen.

// Erik Ocampo

#include <iostream>
#include <fstream>
using namespace std;

const int NUMOFPROD = 10;

class Inventory
{
public:
    void getId(int item);
    void getAmount(int num);
    void display();

private:
    int itemNumber;
    int numOfItem;
};

void Inventory::getId(int item)
{
    itemNumber = item;
}

void Inventory::getAmount(int num)
{
    numOfItem = num;
}

void Inventory::display()
{
    cout << "Item number " << itemNumber << " has " << numOfItem << " items in stock" << endl;
}

int main()
{
    ifstream infile;
    infile.open("Inventory.dat");

    Inventory products[NUMOFPROD];

    int pos;
    int id;
    int total;

    for (pos = 0; pos < NUMOFPROD; pos++)
    {
        infile >> id >> total;
        products[pos].getId(id);
        products[pos].getAmount(total);
    }

    for (pos = 0; pos < NUMOFPROD; pos++)
    {
        products[pos].display();
    }

    infile.close();

    return 0;
}
