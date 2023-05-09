//Projec 5
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
 
int numFloors, numRooms, numOccupied, totalRooms = 0, totalOccupied = 0;
 
// Ask the user for the number of floors 
 
cout << "Enter the number of floors in the hotel: ";
 
cin >> numFloors;
 
// Iterate once for each floor
 
for (int i = 1; i <= numFloors; i++) {
 
// Ask the user for the number of rooms and number of occupied rooms on each floor
 
cout << "Enter the number of rooms on floor " << i << ": ";
 
cin >> numRooms;
 
cout << "Enter the number of occupied rooms on floor " << i << ": ";
 
cin >> numOccupied;
 
// Update the total number of rooms and total number of occupied rooms
 
totalRooms += numRooms;
 
totalOccupied += numOccupied;
 
}
 
// Calculate the number of unoccupied rooms
 
int numUnoccupied = totalRooms - totalOccupied;
 
// Calculate the occupancy rate as a percentage
 
double occupancyRate = static_cast<double>(totalOccupied) / totalRooms * 100;
 
// Display the results
 
cout << "\nTotal number of rooms: " << totalRooms << endl;
 
cout << "Number of occupied rooms: " << totalOccupied << endl;
 
cout << "Number of unoccupied rooms: " << numUnoccupied << endl;
 
cout << "Occupancy rate: " << fixed << setprecision(2) << occupancyRate << "%" << endl;
 
return 0;
}
