#include<iostream>
#include<conio.h>

using namespace std;
class square
{
  int x;
  unsigned Sqr; 
public:
  square(int a)
  {
    x = a;
    Sqr = x*x; 
  }
  square()
  {
    x = 1;
    Sqr = x*x; 
  }

  int display()
  {
    return x;
  }

  // getter function for sqr member variable 
  unsigned getSqr()
  {
    return Sqr; 
  }

  friend istream& take(istream &is, square &s)
  {
    cin>>s.x ;
    s.Sqr = s.x*s.x; 
    return is;
  }

};

// driver code
int main()
{
  square n1(9), n2 = 5;
  square n[3] = {2,3,6};

  cout<< "Enter a Number ";
  take(cin, n2);
  cout<< "square of "<< n2.display()<< " is "<< n2.getSqr()<< endl ;

  cout<< n1.display()<< endl;
  cout<< "square = "<< n1.getSqr() << endl;

 cout<< "Three Numbers and their squares :\n"; 
  for(int i=0; i<3; i++)
     cout<< n[i].display()<< "^2 = "<<n[i].getSqr()<< endl;


  return 0;
}
