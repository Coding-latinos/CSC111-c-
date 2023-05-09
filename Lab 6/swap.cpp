#include <iostream>
using namespace std;
//Erik Ocampo
float variable1,variable2;
int main()
{
cout<<"Enter the first number then press enter"<<endl;
 cin>>variable1;
 cout<<"Enter the second number then press enter"<<endl;
 cin>>variable2;
 cout<<"You input the numbers "<<variable1<<" and "<<variable2<<endl;
 
swap(variable1, variable2);
 
 cout<<"After swapping the first number has the value of "<<variable1<<endl; 
 cout<<"The second number has the value of "<< variable2<<" which was origianlly the value of the first number."<<endl;
 
 return 0;
}