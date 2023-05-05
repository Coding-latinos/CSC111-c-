 //
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
 
float a, b; 
// the smaller two sides of the triangle
 
float hyp; 
// the hypotenuse calculated by the program
 
float ans; // added new variable to squareroot hyp
 
 
cout << "Please input the value of the two sides" << endl;
 
cin >> a >> b;
 
hyp = pow(a,2) + pow(b,2);
 ans = sqrt(hyp);// Fill in the assignment statement that determines the hypotenuse
 
cout << "The sides of the right triangle are " << a << " and " << b << endl;
 
 
cout << fixed << setprecision(2) << ans;
 
cout << "The hypotenuse is " << ans << endl;
 
 
return 0;
}