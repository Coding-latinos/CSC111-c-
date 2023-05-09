//
//scoretable 
#include <iostream>

using namespace std;

void swap(int *x, int *y)

{

int tem = *x;

*x = *y;

*y= tem;

}



void bubbleSort(int arr[], int n)

{

int i, j;

for (i = 0; i < n-1; i++)



for (j = 0; j < n-i-1; j++)

if (arr[j] > arr[j+1])

swap(&arr[j], &arr[j+1]);

}

int main() {

int n,sum=0;

float avg;

cout<<"please input the number of scores : ";

cin>>n;

int arr[n];

for(int i=0;i<n;i++)

{

cout<<"please enter a score : ";

cin>>arr[i];

sum=sum+arr[i];

}

avg=(float)sum/n;

cout<<"the average of the score is "<< avg;

bubbleSort(arr, n);

cout<<" here are the scores in ascending order ";

for(int i=0;i<n;i++)

cout<<arr[i]<<endl;

return 0;

}

