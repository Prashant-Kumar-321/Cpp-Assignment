#include<iostream>
using namespace std; 

class Complex
{
  float real{0}, img{0}; // default value in real = 0 and img = 0;  

  public: 
      // Constructor 
      Complex(float r, float i) // parametrized (2) constructor to initialize object 
      {
        real = r; 
        img = i; 
      }
      Complex() {} // default constructor 
      
      // friend function to take input of Complex number and display 
      friend istream& operator>>(istream&cin, Complex&c)
      {
        cin>> c.real>> c.img; 

        return cin; 
      }
      friend ostream& operator<< (ostream&cout, Complex c)
      {
        char ope = (c.img<0) ? '-': '+'; 

        cout<< c.real<< " "<< ope<< " "<< abs(c.img)<< " i"; 

        return cout; 
      }
      
      // function overloading of operator+ using friend function 
      // friend function to add two complex number 
      friend Complex operator+(Complex c1, Complex c2)
      {
        c1.real = c1.real+c2.real; 
        c1.img = c1.img + c2.img; 

        return c1; 
      }

}; 

// Driver code 
int main(void)
{
  Complex z1,z2; 

  cout<< "Enter two complex number : "<< endl; 
  cout<< "Enter only real and imginary part\n"<< endl;  

  cout<< "z1 : ";
  cin>>z1; 

  cout<< "z2 : ";
  cin>>z2; 

  cout<< "z1 = "<< z1<< endl; 
  cout<< "z2 = "<< z2<< endl; 

  // adding z1 and z2 
  Complex sum; 
  sum = z1 + z2;

  cout<< "\nz1 + z2 = "<< sum<< endl;  
   

 cin.get(); 
 cin.get(); 
 return 0; 
}