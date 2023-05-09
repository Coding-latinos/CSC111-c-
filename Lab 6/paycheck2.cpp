//Erik Ocampo
#include <iostream> 
#include <iomanip> 
using namespace std;
// Function prototypes
void printDescription(); // prototype for a parameter-less function
void calPaycheck(float, int, float&); // prototype for a function with 3 // parameters. The first two are passed
int main() 
{
float payRate;
float grossPay; float netPay; int hours;
cout << "Welcome to the Payroll Program." << endl; 
 printDescription(); // Call to the description function
cout << endl << "Please input the pay per hour." << endl;
cin >> payRate;
cout << endl << "Please input the number of hours worked." << endl; cin >> hours;
cout << endl << endl;
 
calPaycheck(payRate, hours, grossPay); // Call to the calPaycheck function 
netPay= grossPay-(grossPay*.20);
 
cout << "The net pay is " << netPay << endl;
cout << "We hoped you enjoyed this program." << endl;
return 0; 
}
//****************************************************************
// printDescription 
//
// Task: This function prints a program description
// Data in: none
// Data out: no actual parameters altered
// //****************************************************************
void printDescription() // The function heading
{
cout << "****************************************************" <<endl<<endl;
cout << "This program takes two numbers (pay rate and hours) " << endl;
cout << "and outputs gross pay. " << endl;
cout << "****************************************************" << endl << endl;
}
//****************************************************************
// calPaycheck
//
//Task: This function computes gross pay
//Data in: rate and time
//Data out: gross(alters the corresponding actual parameter)
//
//****************************************************************
void calPaycheck(float rate, int time, float& gross) 
{
gross = rate * time;
}