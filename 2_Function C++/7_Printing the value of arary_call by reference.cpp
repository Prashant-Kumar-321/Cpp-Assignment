#include<iostream>
using namespace std;

void printArry(float(&p)[5],int sz)
{
  int i;

  for(i=0; i<sz; i++)
    cout<< p[i]<< " ";
}

int main()
{
  float arr[5] ;
  int i;

  cout<< "Enter five Number \n";
  for(i=0; i<5; i++)
    cin>> arr[i];

  cout<< "\n"<< "Elements of array \n";
  for(i=0; i<5; i++)
    cout<<arr[i] << " ";

  cout<< "\n\n"<<arr<< "Elements of array with function \n";
//  printArry(arr, 5);

  return 0;
}
