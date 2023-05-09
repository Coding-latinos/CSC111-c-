//
#include <iostream> 
#include <string> 
using namespace std;
void writeProverb(int);
int main () 
{
int wordCode;
cout << "Given the phrase:" << endl;
cout << "Now is the time for all good men to come to the aid of their "<< endl;
cout << "Input a 1 if you want the sentence to be finished with party"
<< endl;
cout << "Input a 2 if you want the sentance to be finished with country" << endl; cout << "Please input your choice now" << endl;
 
cin >> wordCode;
if (wordCode==1)
{
 cout<<"Now is the time for all the good men to come to the aid of their party"<<endl;
}
 else if (wordCode==2)
 {
 
cout<<"Now is the time for all the good men to come to the aid of their country"<<endl;
 }
 else
 {
 
cout<< "I'm sorry but that is the incorrect answer.Please input 1 or 2."<<endl;
 }
 
return 0; 
}