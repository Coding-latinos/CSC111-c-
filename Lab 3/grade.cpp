// 

#include<iostream>
#include<iomanip>
using namespace std;
int Firstgrade;
int Secondgrade;
int Thirdgrade;
float Overall;
int main()
{
 
float Firstgrade;
 
float Secondgrade;
 
float Thirdgrade;
 
float Overall;
 
cout << "please enter your first grade ";
 
cin >> Firstgrade;
 
 
cout << "please enter second grade ";
 
cin >> Secondgrade;
 
 
cout << "please enter third grade ";
 
cin >> Thirdgrade;
 
 
Overall = (Firstgrade + Secondgrade + Thirdgrade) /3;
 
 
cout << "Your total average is " << Overall <<endl;
 
return 0;
}