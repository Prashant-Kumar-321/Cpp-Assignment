#include<iostream>

using namespace std;
// class of Prime Number
class PrimeNumber
{
public:
  unsigned int Num;

  bool isPrime()
  {
    int i;

    // corner case
    if(Num == 2) return false ;

    // checking Number divisiblity with i ;
    for(i=2; i<=Num/2; i++)
      if(Num%i == 0) return false;

    return true;

  }

  // constructor
  PrimeNumber ()
  {
    Num = 1;
  }

};

int main()
{
  PrimeNumber a;// Making object with help of default constructor;

  cout<< "Enter a Num to check if it is prime or not \n";
  cin>> a.Num;

  if(a.isPrime())
    cout<< "prime Number \n";
  else
    cout<< "Not Prime Number \n";

  return 0;
}
