//Rain or shine pr7
#include <iostream>
#include <iomanip> // for setw() function
using namespace std;
void printRow(string month, int rainy, int cloudy, int sunny) {
 
cout << month << setw(6) << rainy << setw(8) << cloudy << setw(7) << sunny << endl;
}
int main() {
 
string months[3] = {"June", "July", "August"};
 
int rainy[3] = {11, 11, 16};
 
int cloudy[3] = {8, 14, 7};
 
int sunny[3] = {11, 5, 7};
 
int total_rainy = 0, total_cloudy = 0, total_sunny = 0;
 
int max_rainy_index = 0;
 
 
// print header
 
cout << "Summer Weather Report" << endl;
 
cout << "Month Rainy Cloudy Sunny" << endl;
 
cout << "----------------------------" << endl;
 
 
// print data for each month
 
for (int i = 0; i < 3; i++) {
 
printRow(months[i], rainy[i], cloudy[i], sunny[i]
);
 
total_rainy += rainy[i];
 
total_cloudy += cloudy[i];
 
total_sunny += sunny[i];
 
if (rainy[i] > rainy[max_rainy_index]
) {
 
max_rainy_index = i;
 
}
 
}
 
 
// print totals row
 
cout << "----------------------------" << endl;
 
cout << "Totals" << setw(4) << total_rainy << setw(8) << total_cloudy << setw(7) << total_sunny << endl;
 
 
// print month with most rainy days
 
cout << months[max_rainy_index] << " had the most rainy days." << endl;
 
 
return 0;
}