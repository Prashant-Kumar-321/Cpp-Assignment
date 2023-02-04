#include <iostream>
#include <conio.h>
using namespace std;

namespace pkg
{
  class Complex
  {
   private:
     float real, img;

   public:
     Complex(float r, float im = 0) // default argument parametrized constructor
     {
      real = r;
      img = im;
     }
     Complex()
     { // default constructor
      real = 0;
      img = 0;
     }

     // friend function  to take input and print output of complex object
     friend istream & operator>>(istream &, Complex &); 
     friend ostream & operator<<(ostream &, Complex);

     // Member function
     Complex operator+(Complex);
     Complex operator-(Complex);
     Complex operator*(Complex);
     bool operator==(Complex);
  };

  // declaration of friend funciton of Complex class part of pkg namespce 
  istream&  operator>>(istream &cin, Complex &c);  // function of pkg namespce 
  ostream&  operator<<(ostream &cout, Complex C); // function of pkg namespce 

}

using namespace pkg;

// Definitio of friend function to take input and display complex wich is part of pkg namespace 
istream& pkg::operator>>(istream &cin, Complex &c) // function of pkg namespce 
{
  cin >> c.real >> c.img;

  return cin;
}
ostream& pkg::operator<<(ostream &cout, Complex C) // function of pkg namespce 
{
  char ope = (C.img < 0) ? '-' : '+';                        // operator character will be according the img number
  cout << C.real << " " << ope << " " << abs(C.img) << " i"; // abs() return absolute value of n (n--> int , float , double)

  return cout;
}

// member function definition of Complex class 
 Complex  Complex::operator+(Complex c)
{
  c.real += real; // addition of real part of invoked object and explicitly passed object
  c.img += img;   // addition of img part of invoked object and explicitly passed object

  return c;
}
 Complex  Complex::operator-(Complex c)
{
  c.real = real - c.real; // substraction of real part of invoked object and explicitly passed object
  c.img = img - c.img;    // substraction of img part of invoked object and explicitly passed object

  return c;
}
 Complex  Complex::operator*(Complex c)
{
  Complex temp;

  temp.real = (c.real * real - c.img * img);
  temp.img = (real * c.img + img * c.real);

  return temp;
}
bool  Complex::operator==(Complex c)
{
  // if real(z1) == real(z2) AND img(z1) == img(z2)
  //  z1 == z2
  return ((img == c.img) && (real == c.real)) ? 1 : 0;
  // ((img == c.img) && (real == c.real)) ? return 1 : return 0 ;
}

using namespace pkg; 
// Driver code
int main(void)
{
  Complex z1(4), z2(2, 4);

  // taking complex number as input form user
  cout << "z = a + ib" << endl;
  cout << "Enter only real(a) and imaginay part(b) \n\n";
  cout << "Enter first complex number = ";
  cin >> z1;
  cout << "Enter second complex numnber = ";
  cin >> z2;

  //  displaying complex number ;
  cout << "z1 = " << z1 << endl
       << "z2 = " << z2 << endl
       << endl;

  cout << "Arithmetic operation in complex Number : \n";
  Complex z3 = z1 + z2; // z1.operator+(z2);
  cout << "z1 + z2 = " << z3 << endl;

  Complex z4 = z1 - z2; // z1.operator-(z2);
  cout << "z1 - z2 = " << z4 << endl;

  Complex z5 = z1 * z2; // z1.operator*(z2)
  // copy constructo will be called since i amd initializing z5 object wiht another object of same class
  cout << "z1 X z2 = " << z5 << endl;

  // comparing two complex Number
  if (z1 == z2)
    cout << "z1 = z2 " << endl; // z1.operator==(z2);
  else
    cout << "z1 != z2" << endl;

  return 0;
}