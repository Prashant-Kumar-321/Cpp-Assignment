#include<iostream>
#include<iomanip>
#include<conio.h>

using namespace std;

int main()
{
  int arr[] = {2,3,-4,9,12,13,8,19,2,10};
  int i=0,j=0, sum = 0;

  for(i=0; i<10; i++)
    cout<< arr[i]<< ", ";

  cout<<"\n\n";

/*
  // Printing array like two 2d
  for(i=0; i<10; i=j)
  {
    for(j=i; j<(i+5); j++)
      cout<<setw(3)<<right<< arr[j]<< " ";

    cout<< endl;
  }
*/

//  cout<<"\n\n";
  // Traversing through array while penetrating each element of array
  for(i=0; i<10; i++)
    sum += arr[i];

  cout<< "Sum of all Number in array = "<< sum ;
  cout<<endl;

  return 0;
}
