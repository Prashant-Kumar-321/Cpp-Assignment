#include<iostream>

using namespace std;
class XraisedPowerY
{
 public :

  int x,y;

  float Pow()
  {
    float res = 1;

    if(y>=0)
      while(y--)
        res *= x;
    else
    {
      y *= -1;
      while(y--)
        res *= (1.0/x);
    }

    return res;
  }

  //constructor
  XraisedPowerY() // Default constructor;
  {
    x = 1;
    y = 1;
  }

};

int main()
{
  XraisedPowerY a;

  cout<< "Enter Base : ";
  cin>> a.x;

  cout<< "Enter exponent ";
  cin>> a.y;

  cout<<a.x<<" raise power "<< a.y<< " = "<< a.Pow() <<endl ;

  return 0;
}
