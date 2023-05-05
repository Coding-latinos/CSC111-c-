// 
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
 
float salesmonth;
 
float statetax;
 
float localtax;
 
 
cout << "Please input the monthly sales " << endl;
 
cin >> salesmonth;
 
statetax = salesmonth * .06;
 
localtax = salesmonth * .02;
 
 
 
 
cout << "Monthly sale is " << salesmonth << endl;
 
cout << "The state tax is " << statetax << endl;
 
cout << "Local tax is " << localtax << endl;
 
 
 
 
return 0;
}
