 //This program demonstrates the use of characters and strings
//  
#include <iostream>
#include <string>
using namespace std;
// Definition of constants
const string FAVORITESODA = "Dr. Dolittle"; 
// use double quotes for strings
const char BESTRATING = 'A'; 
// use single quotes for characters
int main()
{
 
char rating; 
// 2nd highest product rating
 
string favoriteSnack; 
// most preferred snack
 
int numberOfPeople; 
// the number of people in the survey
 
int topChoiceTotal; 
// the number of people who prefer the top choice
 
 
favoriteSnack = "crackers"; // Assign the value of "crackers" to favoriteSnack
 
rating = 'B'; // Assign a grade of 'B' to rating
 
numberOfPeople = 250;// Assign the number 250 to the numberOfPeople
 
topChoiceTotal = 148;// Assign the number 148 to the topChoiceTotal
 
// Fill in the blanks of the following:
 
cout << "The preferred soda is " << FAVORITESODA<< endl;
 
cout << "The preferred snack is " << favoriteSnack<< endl;
 
cout << "Out of " << numberOfPeople << " people "
 
<< " chose these items!" << endl;
 
cout << "Each of these products were given a rating of " << rating << endl;
 
cout << " from our expert tasters" <<endl;
 
cout << "The other products were rated no higher than a " << rating
 
<< endl;
 
return 0;
}
