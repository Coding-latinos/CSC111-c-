//Beverage surv
//
#include <iostream>
using namespace std;
int main()
{
 
// Initialize counters for each beverage
 
int coffeeCount = 0;
 
int teaCount = 0;
 
int cokeCount = 0;
 
int orangeJuiceCount = 0;
 
// Get input from each person until sentinel value is entered
 
int beverageChoice;
 
while (true)
 
{
 
cout << "Enter your favorite beverage (1=Coffee, 2=Tea, 3=Coke, 4=Orange Juice) or -1 to exit: ";
 
cin >> beverageChoice;
 
// Check if sentinel value was entered
 
if (beverageChoice == -1)
 
{
 
break;
 
}
 
// Update tally for the chosen beverage
 
switch (beverageChoice)
 
{
 
case 1:
 
coffeeCount++;
 
break;
 
case 2:
 
teaCount++;
 
break;
 
case 3:
 
cokeCount++;
 
break;
 
case 4:
 
orangeJuiceCount++;
 
break;
 
default:
 
cout << "Invalid input" << endl;
 
}
 
}
 
// Output the survey results
 
cout << "Survey Results: " << endl;
 
cout << "Coffee: " << coffeeCount << endl;
 
cout << "Tea: " << teaCount << endl;
 
cout << "Coke: " << cokeCount << endl;
 
cout << "Orange Juice: " << orangeJuiceCount << endl;
 
return 0;
}