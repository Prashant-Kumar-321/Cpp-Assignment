#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
  int a = 5, b = 10;

  cout<< "Befor swapping \n";
  cout<< "a = "<<a << ", b = "<< b<< "\n\n";

  // swapping the value of a and b;
  // without using third variable
  a = a+b;  // a = 15
  b = a-b;  // b = 5;
  a = a-b;  // a = 10;

  //swapping the value of a and b;
  // using third tem variable
  int tem = a;
  a = b;
  b = tem;

  // swapping the value of a and b
  // using xor oprator
  a ^= b;
  b ^= a;
  a ^= b;

  /*// using (& | << >> )
  a <<= 10;
  a |= b;
  b = a>>10;
  a = a&1023;
  */

  cout<< "After Swapping "<< endl;
  cout<< "a = "<<a << ", b = "<< b<< endl;

  getch();
  return 0;
}
