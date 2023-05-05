// This program will determine the batting average of a player.
// The number of hits and at bats are set internally in the program.
// 
#include <iostream>
using namespace std;
const float AT_BAT = 421;
const float HITS = 123;
int main()
{
 
float batAvg;
 
batAvg = HITS / AT_BAT; 
// an assignment statement 
 
cout << "The batting average is " << batAvg << endl; 
// output the result
 
return 0;
}