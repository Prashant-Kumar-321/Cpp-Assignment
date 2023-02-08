#include<iostream>
#include<conio.h>

using namespace std; 

class Distance
{
   int feet ; 
   int Inch; 
    public: 
    Distance() { }
    Distance (int f, int in)
    {
      feet = f; 
      Inch = in; 
    }

    void display()
    {
      cout<< "Feet = "<< feet<< endl; 
      cout<< "Inch = "<< Inch<< endl; 
    }

    // overloading function call operator ( )
    Distance operator() (int a, int b, int c)
    {
      feet = a+c+5; 
      Inch = a+b+15; 

      return *this; 
    }
    
}; 

int main()
{
    Distance d1 = Distance(45,9); 
    d1.display(); 

    Distance d2 = d1(10,30,20); // calling ==> function call operator ---< ( ) 
    d1.display(); 
    cout<< "\n d2 :"<< endl; 
    d2.display(); 

    return 0; 
}