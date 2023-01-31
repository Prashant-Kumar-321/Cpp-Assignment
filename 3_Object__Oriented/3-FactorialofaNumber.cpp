// Question
/*
De   fine class Factorial and define and instance member function to find the factorial of
a number using class.
*/
#include<iostream>
#include<conio.h>

using namespace std;

class Factorial
{
  unsigned long long fact; 

  public:
  int x;
  Factorial(int a = 1) //default argument constructor
  {
    x = a;
  }
  ////////////...... Instance Member function.... /////////////////////////
  unsigned long long Fact(int b)
  {
   if(b == 1 || b== 0)
    return 1;

   else if (b < 0)
    return 0;

   return b * Fact(b-1);
  }

  unsigned long long Fact()
  {
    int i;

    unsigned long long fact = 1;
    for(i=1; i<=x; i++) // calculating factorial of x
      fact *= i;

    this -> fact = fact; 
    return fact;
  }
  unsigned long long getFact()
  {
    return fact; 
  }
};

int main()
{
  int num = 10;
  cout<< "Enter a Number : ";
  cin>> num;

  Factorial f2;
  cout<< "factorial = "<< f2.Fact(num)<< endl;

  cout<< "Enter a Number : ";
  cin>> f2.x;
  
  f2.Fact(); 

  cout<< f2.x<< "! = "<< f2.getFact()<< endl;



  return 0;
}
