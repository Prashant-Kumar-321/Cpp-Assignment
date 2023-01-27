#include<iostream>
#include<conio.h>
#include<unistd.h>

using namespace std ;

#define PI 3.141592 // Macros

int main()
{
   while(true)
  {
   float radius, Area;

   cout<< "Enter radius of circle : ";
   cin>> radius;

   Area = PI * radius * radius ;// calculating Area
   cout<< "Area of Circle = "<< Area << endl ;
   cout<< "Cirference = "<< (2*PI*radius)<< endl ;

   getch();
   system("cls");
  }

 return 0;
}
