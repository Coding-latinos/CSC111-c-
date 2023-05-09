//
#include<iostream>
#include <iomanip> 
using namespace std;
double miles,hours,milesperhour;
void MPH();
int main()
{
cout<<"Please input the miles traveled"<<endl;
 cin>>miles;
 cout<<"PLease input the hours traveled"<<endl;
 cin>>hours;
 
milesperhour=miles/hours;
 
 cout << "Your speed is " << fixed << setprecision(2) << milesperhour
 
<< " miles per hour\n";
 
 return 0;
 
}