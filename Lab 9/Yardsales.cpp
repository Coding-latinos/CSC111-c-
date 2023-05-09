//

#include <iostream>

using namespace std;

int main(){
int size;
cout << "Please input the number of monthly sales to be input: ";
cin >> size;
double *arr = new double[size];
double total = 0;
for(int i = 0; i < size; ++i){
cout << "Please input the sales for month " << (i + 1) << ": ";
cin >> arr[i]; 
total += arr[i];
}
cout << "The total sales for the year is $" << total << endl;
cout << "The average monthly sale is $" << total / size << endl;
return 0;
}

