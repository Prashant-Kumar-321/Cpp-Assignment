#include<iostream>
#include<conio.h>
#include<iomanip>
#define PI 3.141592

using namespace std;

class Circle
{
  float radius;

public:
  Circle(){}
  Circle(float r)
  {
    radius = r;
  }

  // instance member function
  float Area()
  {
    return (PI*radius*radius); // circle area
  }

  float Circumference()
  {
    return (2 * PI * radius);
  }

  float dia()
  {
    return (2*radius);
  }

  float getRadius()
  {
    return radius;
  }

  // friend function
  friend istream& operator>> (istream&is, Circle &c)
  {
    is>>c.radius;
    return cin;
  }

};

// drive code
int main()
{
  Circle c1(6);

//  // taking input from user
//  cout<< "Enter radius of circle \n";
//  cin>> c1;

  cout<< "Radius of circle = "<< c1.getRadius()<< endl ;
  cout<< "Area of cicle = "<< c1.Area()<< endl ;
  cout<< "Circumference of cicle = "<< c1.Circumference()<< endl ;
  cout<< "Diameter of circle = "<< c1.dia()<< endl;






  getch();
  return 0;
}
































