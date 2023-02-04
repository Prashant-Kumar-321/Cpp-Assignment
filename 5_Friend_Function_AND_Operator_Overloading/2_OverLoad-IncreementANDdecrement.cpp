#include<iostream>
#include<conio.h>
using namespace std; 

class ABC
{
  public: 
    int x; 
   
   ABC(int a = 0)
   { 
    x = a; 
   }
  
  void display()
  {
    cout<< "x  = "<< x<< endl; 
  }
  
  // Increment operator overloading 
  // post--Increment member function 
  ABC operator++(int)
  {
    ABC tem = *this; // created an temporay object and intialized with invoke object value ; 
    ++x; // increase the value of invoked object by one 

    return tem; 
  }
  // pre--increment of object 
  ABC operator++()
  {
    ++x; 
    return *this; 
  }

// Decrement operator overloading ----overloading 
 // post--decrement 
 ABC operator--(int)
 {
    ABC temp = *this; 

    x--; 

   return temp; 
 }

 //pre--decrement 
 ABC operator--()
 {
   x++; 
   return *this; 
 }
};

// Driver Function 
int main(void)
{
  ABC a; 
  a.x = 4; 
  a.display(); 

  // unary increment
  ABC b = a++; // a = a+1; 
  b.display(); 
  a.display(); 

  ++a; // 1+a
  a.display(); 

  //Unary decrement 
  b = a--; // post decrement 
  // ABC ABC::operator--(int); this is called 
  a.display(); 
  b.display(); 

  --a;  // pre Decrement // ABC ABC::operator--(); this is called 
  a.display(); 

  getch(); 
  return 0; 
}