#include<iostream>
#include<conio.h>
using namespace std; 

class Marks
{
    int marks; 
    public: 
      Marks() { }
      Marks(int a)
      {
        marks = a; 
      }

      void display()
      {
        cout<< "Marks = "<< marks<< endl; 
      }

      // overloading (->) operator 
      Marks *operator->()
      {
          cout<< "operator (->) called "<< endl; 
          return this; 
      }
}; 


int main()
{ 
  Marks m1(200); 
  m1.display();
  
  m1 = 300; 
  m1->display(); // Accessing member variable with object and -> (Arrow operator)

  return 0; 
}