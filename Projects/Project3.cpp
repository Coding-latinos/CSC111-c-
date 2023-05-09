#include <iostream>
#include <iomanip> // Formatting
using namespace std;
int main()
{
 
// Variables
 
const float Broker_Commission = .02,
 
Paid_Share = 45.50,
 
Sold_Share = 56.90;
 
const int Shares = 1000;
 
float joes_purchase,
 
total_com_bought,
 
total_com_sold,
 
amount_stock_sold,
 
profit;
//The math 
joes_purchase = Shares * Paid_Share;
 
total_com_bought = joes_purchase * Broker_Commission;
 
amount_stock_sold = Shares * Sold_Share;
 
total_com_sold = amount_stock_sold* Broker_Commission;
 
profit = (amount_stock_sold - (total_com_bought + total_com_sold)
) - joes_purchase;
 cout << setprecision(2) << fixed << endl;
 
cout << "Amount paid for the stock: ";
 
cout << joes_purchase << endl;
 
cout << "Amount commission paid when he bought his stock: ";
 
cout << total_com_bought << endl;
 
cout << "Amount Joe sold stock : ";
 
cout << amount_stock_sold << endl;
 
cout << "Amount commission paid when the stock was sold: ";
 
cout << total_com_sold << endl;
 
cout << "Amount of profit Joe made after selling his stock and\n";
 
cout << "paying two commissions to broker ";
 
cout << profit << endl;
 
 
return 0;
}