//
#include <iostream>
using namespace std;
int main()
{
int n, m; // declare variables to hold user input
int total = 0; // variable to hold the sum of consecutive integers
int number; // variable to hold the current integer in the loop
float mean; // variable to hold the mean of consecutive integers
cout << "Please enter two positive integers: "; 
// prompt user for input
cin >> n >> m; 
// read in the user input
if (n > 0 && m > 0) 
// check that both inputs are positive
{
 
for (number = n; number <= m; number++) 
// loop over the consecutive integers
 
{
 
total = total + number; 
// add current integer to total
 
}
 
mean = static_cast<float>(total) / (m - n + 1); 
// compute mean using operator
 
cout << "The mean of the consecutive positive integers " << n << " to " << m << " is " << mean << endl; // output result
}
else
{
 
cout << "Invalid input - integers must be positive" << endl; 
// output error message for invalid input
}
return 0;
}