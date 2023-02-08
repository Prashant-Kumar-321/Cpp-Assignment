#include<iostream>
#include<conio.h>
using namespace std; 

class Interger
{
    int x; 
    public: 
      Interger() { }
      Interger(int a)  
      {
          x = a; 
      } 
      void update(int a)
      {
        x = a; 
      } 
      void display()
      {
        cout<< "x = "<< x<< endl; 
      }

      //overloading  casting int() operator
      operator int()
      {
        return x; 
      }
}; 

// Driver function
int main()
{ 
    Interger num = 9; 
    int age = num ; // num.operator int () ---> return num.x; 
    num = 78;  // num.operator=(Integer a = 78); valid 
    age = num.operator int();
    age = num ; // num.operator int () 
    

    cout<< "age = "; 
    num.display(); 
    cout<< "age = "<< age<< endl; 
    
    getch(); 
    return 0; 
}