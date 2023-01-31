#include<iostream>
#include<conio.h>
#include<iomanip>
#define PI 3.141592

using namespace std;

class Circle
{
  float radius;
  float Area, Dia, Circfer; 

public:
  Circle(){}
  Circle(float r)
  {
    radius = r;

    // prameters of circle
    Area = PI * r * r; 
    Dia = 2*r; 
    Circfer = 2*PI*r; 
  }

  //  instance member function
  // No need to mke member function  to calculate parameter of circle
    // float Area()
  // {
  //   return (PI*radius*radius); // circle area
  // }

  // float Circumference()
  // {
  //   return (2 * PI * radius);
  // }

  // float dia()
  // {
  //   return (2*radius);
  // }

 // getter function 
  float getRadius()
  {
    return radius;
  }

  float getArea()
  {
    return Area;
  }

  float getCircmfer()
  {
    return Circfer;
  }

  float getDia()
  {
    return Dia;
  }

  // friend function
  friend istream& operator>> (istream&is, Circle &c)
  {
    is>>c.radius;
    
    // calculating parameter of circle 
    c.Area = PI * c.radius * c.radius; 
    c.Circfer = 2 * PI * c.radius; 
    c.Dia = 2 * c.radius; 

    return cin;
  }

};

// drive code
int main()
{
  Circle c1(6);

 // taking input from user
 cout<< "Enter radius of circle \n";
 cin>> c1;

  cout<< "Radius of circle = "<< c1.getRadius()<< endl ;
  cout<< "Area of cicle = "<< c1.getArea()<< endl ;
  cout<< "Circumference of cicle = "<< c1.getCircmfer()<< endl ;
  cout<< "Diameter of circle = "<< c1.getDia()<< endl;

  getch();
  return 0;
}
































