#include <iostream>
#include <iomanip>
using namespace std;
// This program will input American money and convert it to foreign currency
// 
// Prototypes of the functions
void convertMulti(float dollars, float& euros, float& pesos);
void convertMulti(float dollars, float& euros, float& pesos, float& yen);
float convertToYen(float dollars);
float convertToEuros(float dollars);
float convertToPesos(float dollars);
int main()
{
 
float dollars;
 
float euros;
 
float pesos;
 
float yen;
 
cout << fixed << showpoint << setprecision(2);
 
cout << "Please input the amount of American Dollars you want converted "
 
<< "to euros and pesos" << endl;
 
cin >> dollars;
 
// Call the convertMulti function with parameters dollars, euros, and pesos
 
convertMulti(dollars, euros, pesos);
 
// Output the value of those dollars converted to euros and pesos
 
cout << dollars << " US dollars is equal to " << euros << " euros." << endl;
 
cout << dollars << " US dollars is equal to " << pesos << " pesos." << endl;
 
cout << "Please input the amount of American Dollars you want converted\n";
 
cout << "to euros, pesos and yen" << endl;
 
cin >> dollars;
 
// Call the convertMulti function with parameters dollars, euros, pesos, and yen
 
convertMulti(dollars, euros, pesos, yen);
 
// Output the value of those dollars converted to euros, pesos, and yen
 
cout << dollars << " US dollars is equal to " << euros << " euros." << endl;
 
cout << dollars << " US dollars is equal to " << pesos << " pesos." << endl;
 
cout << dollars << " US dollars is equal to " << yen << " yen." << endl;
 
cout << "Please input the amount of American Dollars you want converted\n";
 
cout << "to yen" << endl;
 
cin >> dollars;
 
// Call the convertToYen function with parameter dollars
 
yen = convertToYen(dollars);
 
// Output the value of those dollars converted to yen
 
cout << dollars << " US dollars is equal to " << yen << " yen." << endl;
 
cout << "Please input the amount of American Dollars you want converted\n";
 
cout << "to euros" << endl;
 
cin >> dollars;
 
// Call the convertToEuros function with parameter dollars
 
euros = convertToEuros(dollars);
 
// Output the value of those dollars converted to euros
 
cout << dollars << " US dollars is equal to " << euros << " euros." << endl;
 
cout << "Please input the amount of American Dollars you want converted\n";
 
cout << "to pesos " << endl;
 
cin >> dollars;
 
// Call the convertToPesos function with parameter dollars
 
pesos = convertToPesos(dollars);
 
// Output the value of those dollars converted to pesos
 
cout << dollars << " US dollars is equal to " << pesos << " pesos." << endl;
 
return 0;
}
// The convertMulti function takes a dollar value and converts it to euros and pesos
void convertMulti(float dollars, float& euros, float& pesos)
{
 
// Convert dollars to euros and pesos using conversion rates and store them in the euros and pesos variables
 
euros = dollars * 0.85;
 
pesos = dollars * 20.27;
}
/// The convertMulti function takes a dollar value and converts it to euros, pesos, and yen
void convertMulti(float dollars, float& euros, float& pesos, float& yen)
{
// Convert dollars to euros, pesos, and yen using conversion rates and store them in the euros, pesos, and yen variables
euros = dollars * 0.85;
pesos = dollars * 20.27;
yen = convertToYen(dollars);
}
// The convertToYen function takes a dollar value and converts it to yen
float convertToYen(float dollars)
{
// Convert dollars to yen using the conversion rate and return the result
float yen = dollars * 109.51;
return yen;
}
// The convertToEuros function takes a dollar value and converts it to euros
float convertToEuros(float dollars)
{
// Convert dollars to euros using the conversion rate and return the result
float euros = dollars * 0.85;
return euros;
}
// The convertToPesos function takes a dollar value and converts it to pesos
float convertToPesos(float dollars)
{
// Convert dollars to pesos using the conversion rate and return the result
float pesos = dollars * 20.27;
return pesos;
