#include<iostream>
#include<cmath>
using namespace std;

int main()
{
  // math method
  //modf( )

  double x = 14.35, fractionalPart;
  double intpart;
  x = 8.548;
  fractionalPart = modf(x,&intpart);

  cout<< "Fraction part of "<< x << " is "<< fractionalPart<< endl;
  cout<< "Integer part of "<< x << " is "<< intpart<< endl;


  return 0;
}
