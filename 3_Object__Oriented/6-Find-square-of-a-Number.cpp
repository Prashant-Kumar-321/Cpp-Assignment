#include<iostream>
#include<conio.h>

using namespace std;
class square
{
  int x;
public:
  square(int a)
  {
    x = a;
  }
  square()
  {
    x = 1;
  }

  int display()
  {
    return x;
  }

  unsigned long squ()
  {
    static int Count = 0;
    Count++;

    return (x*x);
  }

  friend istream& take(istream &is, square &s)
  {
    cin>>s.x ;
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
  cout<< "square of "<< n2.display()<< " is "<< n2.squ()<< endl ;

  cout<< n1.display()<< endl;
  unsigned int x = n1.squ();
  cout<< "square = "<< x<< endl;

  for(int i=0; i<3; i++)
     cout<< n[i].display()<< " " ;


  return 0;
}
