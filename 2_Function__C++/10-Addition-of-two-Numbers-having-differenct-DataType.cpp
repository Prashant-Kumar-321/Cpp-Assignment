#include<iostream>
#include<conio.h>

using namespace std;

// overloaded function to add two number of different data type;
float Add(int a,float b)
{
  cout<< "infl"<< endl;
  return (a+b);
}
float Add(float a,int b)
{
  cout<< "flint"<< endl;
  return (a+b);
}

int main()
{
  int a;
  float b;
  cout<< "Enter two number : ";
  cin>>a>>b;
  cout<< "Addition = "<< Add(a,b)<< "\n";
  cout<< "Addition = "<< Add(b,a)<< "\n";

  getch();
  return 0;
}
