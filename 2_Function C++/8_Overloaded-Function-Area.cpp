#include<iostream>
#include<conio.h>
#include<cmath>
#include<cstdlib>

#define PI  3.141592 // Macros of PI

using namespace std;

// overloaded function definition
float Area(float r) // Area of circle
{
  return (PI * r * r);
}

float Area(float l, float b)// Area of rectangle
{
  return (l*b);
}

float Area(float a, float b, float c) // Area of triangle
{
  float s = (a+b+c)/2.0;

  return sqrt(s*(s-a)*(s-b)*(s-c));
}

// Driver code
int main()
{
  int choice;
  cout<< "Select one of the follwing option:: "<< endl ;
  cout<< "1.Area of circle "<< endl;
  cout<< "2.Area of Rectangle "<< endl;
  cout<< "3.Area of Triangle "<< endl;

  cin >> choice; // tking choice from user

  // Allocating memory dynamically according to the choice
  float*p = (float *)malloc(choice*sizeof(float));

  // displaying parameter of choosed geometry
  switch(choice)
  {
   case 1:
    cout<< "Radius : ";
    break;
   case 2:
    cout << "length and width: ";
    break;
   case 3:
    cout<< "sides of circle : ";
    break;
  }

  // taking input form user
  for(int i=0; i<choice; i++)
    cin>>*(p+i);

  float area;

  // function calling
  switch(choice)
  {
   case 1:
     area = Area(p[0]);
    break;

   case 2:
     area = Area(p[0],p[1]);
    break;

   case 3:
     area = Area(p[0],p[1],p[2]);
    break;
  }

  cout<< "Area = "<< area << " square units "<< endl;

  return 0;
}


















