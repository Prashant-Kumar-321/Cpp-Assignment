#include<iostream>
#include<conio.h>

using namespace std;

class Cube
{
  float a;
public:
  Cube(float side) // parametrized constructor;
  {
    a = side;
  }
  Cube() {} // default constructor;

  float vol ()
  {
    return (a*a*a);
  }

  friend istream& operator>>(istream&is, Cube &c) // friend function to take input in the cube object
  {
    cin>>c.a;
    return cin;
  }
};

// Driver main function
int main()
{
  Cube cb1(2);

  //taking input in my object
  cout<< "Enter side length of cube : ";
  cin>> cb1;

  cout<< "Volume of cube = "<< cb1.vol()<< endl;

  getch();
  return 0;
}
