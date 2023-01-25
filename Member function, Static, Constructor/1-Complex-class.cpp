#include<iostream>
#include<conio.h>

using namespace std;
// class definition
class complex
{
private:
  float rel, img;
  float Abs(float );

public:
  complex(){} // default constructor
  complex(float a, float b) // 2 parameterized constructor
  {
    rel = a;
    img = b;
  }

  // member function declaration
  void setData(float , float); // set complex Number

  void showData(); // display complex number

  complex add (complex); // adding two complex Number
};

// definition of complex class's member function
float complex::Abs(float a)
{
  if(a<0)
    return (-a);

  return a;
}

void complex:: setData(float r, float m)
{
  rel = r;
  img = m;
}

void complex::showData()
{
  char ch = (img<0)? '-': '+'; // if img --> -ve ==> ch = '-' else img = '+';

  cout<<rel<< " "<<ch<<" i "<<Abs(img); // display complex Number
}

complex complex::add(complex c) // addition of two complex number ;
{
  complex tem;

  tem.rel = rel + c.rel;
  tem.img = img + c.img;

  return tem;
}

// Driver code
int main()
{
  float A,B;
  // declaring object of complex class
  complex a(2,4), b(4,-1),c;

  cout<< "Enter two complex number :"<< endl<< endl;

  cout<< "1st complex number : "<<endl;  // taking input fist complex number ;
  cout<< "Real Part : ";
  cin>> A;
  cout<< "Imaginary part without i: ";
  cin>> B;
  a.setData(A,B);

  cout<< endl;
  cout<< "2nd complex number : "<<endl;  // taking input second complex number ;
  cout<< "Real Part : ";
  cin>> A;
  cout<< "Imaginary part without i: ";
  cin>> B;
  b.setData(A,B);

  cout<< "Z1 = ";
  a.showData();
  cout<<endl<< "Z2 = ";
  b.showData();
  cout<< "\n\n";

  c = a.add(b);

  cout<< "Z1 + Z2 = ";
  c.showData();

  getch();
  return 0;
}







