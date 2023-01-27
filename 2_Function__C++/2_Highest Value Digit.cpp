#include<iostream>
#include<cstdlib>
using namespace std;

class HighestValueDigit
{
 public :
  long long num;

  short int highestDigit()
  {
    int max = abs(num)%10;

    while(num /= 10) // while(num != 0);
      max = (max > abs(num)%10) ? max : abs(num)%10;
     //      num /= 10;

    return max;
  }

  // constructor
  HighestValueDigit()
  {
    num = 1;
  }

};

int main()
{
  HighestValueDigit a; //

  cout<< "Enter a Number " << endl ;
  cin>> a.num;

  cout<< "Highest Digit = "<< a.highestDigit()<< endl ;


  return 0;
}
