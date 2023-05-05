//
//Bank problem
#include <iostream>
using namespace std;
int main() {
 
int Tellers, Misseddays, totalDaysMissed = 0;
 
cout << "Enter the number of tellers at Nation's Bank: ";
 
cin >> Tellers;
 
for (int year = 1; year <= 3; year++) {
 
for (int teller = 1; teller <= Tellers; teller++) {
 
cout << "Enter the number of days missed by teller " << teller << " in year " << year << ": ";
 
cin >> Misseddays;
 
totalDaysMissed += Misseddays;
 
}
 
}
 
cout << "Total number of tellers: " << Tellers << endl;
 
cout << "Total number of days missed by all tellers over the last three years: " << totalDaysMissed << endl;
 
return 0;
}