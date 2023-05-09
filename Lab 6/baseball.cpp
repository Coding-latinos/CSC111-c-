//Erik Ocampo
#include <iostream>
#include <iomanip>
using namespace std;
// Function prototypes
int getWins();
int getLosses();
float calculateWinPercentage(int wins, int losses);
int main()
{
 
int wins, losses;
 
float winPercentage;
 
// Get input from user
 
wins = getWins();
 
losses = getLosses();
 
// Calculate win percentage
 
winPercentage = calculateWinPercentage(wins, losses);
 
// Display result to user
 
cout << "Win percentage: " << fixed << setprecision(2) << winPercentage << "%" << endl;
 
return 0;
}
// Function to get the number of wins
int getWins()
{
 
int wins;
 
cout << "Enter the number of wins: ";
 
cin >> wins;
 
return wins;
}
// Function to get the number of losses
int getLosses()
{
 
int losses;
 
cout << "Enter the number of losses: ";
 
cin >> losses;
 
return losses;
}
// Function to calculate the win percentage
float calculateWinPercentage(int wins, int losses)
{
 
float percentage;
 
percentage = (float)wins / (wins + losses) * 100;
 
return percentage;
}