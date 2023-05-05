//

#include <iostream>
using namespace std;
int main()
{
const float G = 9.8; // acceleration due to gravity in meters/second^2
int t; 
// number of seconds the watermelon falls
float h, d; 
// height of the bridge and distance fallen by the watermelon
cout << "Enter the height of the bridge in meters: ";
cin >> h;
cout << "Enter the number of seconds the watermelon falls: ";
cin >> t;
if (t < 0) { // Check for invalid input
 
cout << "Error: Invalid input. The number of seconds must be a positive integer." << endl;
 
return 0;
}
cout << "Seconds\tDistance" << endl;
for (int i = 0; i <= t; i++) {
 
d = 0.5 * G * i * i; // calculate the distance for each second
 
 
if (d > h) { // check if distance greater
 
cout << "Error: The distance fallen is greater than the height of the bridge." << endl;
 
return 0;
 
}
 
cout << i << "\t" << d << endl;
}
return 0;
}