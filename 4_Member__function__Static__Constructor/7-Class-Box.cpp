#include<iostream>
#include<conio.h>
#include<string>
#include<cstring>

using namespace std;

namespace A
{
  class Box;  // declaring Box class inside A namespace
}

// defining class A
class A::Box
{
  float len, bredth, height;
public:
  Box(float l,float b, float h)
  {
    len = l ;
    bredth = b;
    height = h;
  }
  Box() {}

  // member function ;
  float vol()
  {
    return (len*bredth*height);
  }
  float surface_Area()
  {
    return (2*(len*bredth + bredth*height+ len*height));
  }

  /***************************************************************/
  // friend function to take input ;
  friend istream& operator>> (istream&is, Box&b)
  {
    cin>>b.len>> b.bredth>> b.height;
    return cin;
  }

};

// Driver code
int main()
{
  string name;
  cout<< "Enter Your name ";
  getline(cin, name);

  A::Box b(1, 2.5, 6); // declaring Object of Box class

  cout<< "Enter Dimension of box:"<< endl;
  cout<< "length bredth height = ";
  cin>>b;

  cout<< "\nName = "<< name<< endl;
  cout<< "Volume of box      = "<< b.vol() << endl;
  cout<< "Total surface Area = "<< b.surface_Area()<< endl;

  return 0;
}

