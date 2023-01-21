#include<iostream>
#include<conio.h>

using namespace std;

// overloaded function max
int max (int a, int b)
{
  return  (a>b) ? a: b;
}
float max (float a, float b)
{
  return (a>b) ? a: b;
}

int main()
{
  int x,y;
  cout<< "Enter two number : ";
  cin>> x>> y;
  cout<< "Max = "<< max(x,y)<< endl<< endl;

  float a,b;
  cout<< "Enter two number : ";
  cin>> a>> b;
  cout<< "Max = "<< max(a,b)<< endl;

  cout<< "\n";
  getch();
  return 0;
}
