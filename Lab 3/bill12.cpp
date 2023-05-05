// 
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
 
int 
quantity; 
// contains the amount of items purchased
 
float itemPrice; 
// contains the price of each item
 
float totalBill; 
// contains the total bill.
 
char item [128];
 
cout << "Please input the name of the item" << endl;
 
cin.getline( item, 128, '\n' );
 
 
cout << setprecision(2) << fixed << showpoint; 
// formatted output
 
cout << "Please input the number of items bought" << endl;
 
cin >> quantity;// quantity of item
 
cout << "How Much are the item's?" << endl; //price of the item
 
cin >> itemPrice;// price of item
 
 
totalBill = quantity * itemPrice;// expression needed for total
 
cout << "The item that you bought is " << item << endl;
 
cout <<"Your total comes out to be $ " << totalBill << endl; //The result of the bill
 
return 0;
}