 //

 
#include <iostream>
using namespace std;
const double PI = 3.14;
const double RADIUS = 5.4;
int main()
{
 
float area; 
// definition of area of circle
 
float circumference; 
// definition of circumference
 
circumference = 2 * PI * RADIUS; 
// computes circumference
 
area = RADIUS * RADIUS * PI; 
// computes area
 
 
cout << "The circumferance is: " << circumference<< endl;// Fill in the code for the cout statement that will output (with description)
 
// the circumference
 
 
cout << "The Area of the circle is: " << area << endl;// Fill in the code for the cout statement that will output (with description)
 
// the area of the circle
 
 
return 0;
}