#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
  int n1, n2;
  cout<< "Enter two Number : ";
  cin>>n1 >>n2;

  int max = (n1>n2) ? n1: n2;

  cout<< "Maximum = "<< max<<endl;

  getch();
  return 0;
}
