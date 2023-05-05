// 
#include<iostream>
#include<iomanip>
using namespace std;
 
const float Acolonial = 85;
const float Modern = 57.50;
const float classical = 127.75;
int main()
{
 
int colonial; // amount of the colonial chair sold
 
int modern; //amount of modern chairs sold
 
int classic ; //classical chairs sold
 
 
float colonialtot;
 
float moderntot;
 
float classictot;
 
 
cout << setprecision(2) << fixed << showpoint;
 
cout<< "Please enter the amount of colonial chairs sold\n ";
 
 
cin >> colonial;
 
cout << "Please enter the amount of modern chairs sold\n ";
 
cin >> modern;
 
cout << "PLease enter the amount of classical chars sold\n ";
 
cin >> classic;
 
colonialtot = Acolonial * colonial;
 
moderntot = Modern * modern; 
// Made a variable to calculate total
 
classictot = classical * classic;
 cout << "*****************************************************" << endl;
cout << "The total amount sold from colonial chairs is\n " << colonialtot << endl;
cout << "The total amount sold from modern chairs\n " << moderntot << endl;
cout << "The total amount sold from classical chairs\n " << classictot << endl;
return 0;
}