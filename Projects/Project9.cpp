// Project 9


#include <iostream>
int averageScore(double*an_array,int size);
void sortArray(double* an_array, int size);
int main()
{
std::cout<<"Please enter how many grades\n";
  int grade_num;
  
std::cin>>grade_num;
  
  double* arrayptr;
  arrayptr=new double[grade_num];
  
  for(int i=0;i<grade_num;i++){
    
    std::cout<<"Please enter a grade\n";
    loop:
    double grade;
    std::cin>>grade;
    
    if(grade>-1){
      *(arrayptr + i) = grade;
      
    }
    else
    {
      std::cout << "Please enter a positive number\n";
      goto loop;
    }
    *(arrayptr + i) = grade;
  }
 std::cout<<"\nHere is the grades entered\n";
  for(int i=0;i<grade_num;i++)
    {
      std::cout<<*(arrayptr + i)<<std::endl;
    }

  sortArray(arrayptr,grade_num);
  std::cout<<"\nHere are the grades sorted by ascending order\n";
  for(int i=0;i<grade_num;i++)
    {
      std::cout<<*(arrayptr + i)<<std::endl;
    }
  std::cout<<"\nHere is the average grade\n";
  std::cout<<averageScore(arrayptr,grade_num);
}

void swap(double &a,double &b)
{
  double temp=a;
a=b;
b=temp;
  
}

void sortArray(double* an_array, int size){
  int maxElement;
  int index;
  for(maxElement=size-1;maxElement>0;maxElement--)
    {
      for(index=0;index <maxElement;index++)
        {
      if(an_array[index]>an_array[index+1])
        swap(an_array[index],an_array[index+1]);
        }  
    }

}
  

int averageScore(double*an_array,int size)
  {
  double average=0;
  for(int i=0;i<size;i++){
    average+=*(an_array+i);
      }
    average=average/size;
    return average;
  }
  