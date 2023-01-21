#include<iostream>
#include<conio.h>

using namespace std;
class Factorial
{
public:
  int x;

  Factorial(int a = 1) //default argument constructor
  {
    x = a;
  }

  ////////////////////Instance Member function /////////////////////////
  unsigned long long fact(int b)
  {
   if(b == 1 || b== 0)
    return 1;
  else if (b < 0)
    return 0;

   return b * fact(b-1);
  }

  unsigned long long fact( )
  {
    int i;

    unsigned long long fact = 1;
    for(i=1; i<=x; i++) // calculating factorial of x
      fact *= i;

    return fact;
  }
};

int main()
{
  int num = 10;

  Factorial f2;
  cout<< "factorial = "<< f2.fact(num)<< endl;

  cout<< "Enter a Number : ";
  cin>> f2.x;

  cout<< f2.x<< "! = "<< f2.fact()<< endl;



  return 0;
}
