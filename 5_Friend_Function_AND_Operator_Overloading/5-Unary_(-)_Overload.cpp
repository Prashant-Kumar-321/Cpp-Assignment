#include <iostream>
using namespace std;

class Number
{
  int x, y, z;

public:
  Number(int x, int y, int z) // parametrized constructor
  {
    this->x = x;
    this->y = y;
    this->z = z;
  }
  Number() {} // default constructor

  void display()
  {
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;
  }

  Number operator-() // unary- operator overloading
  {
    x *= -1;
    y *= -1;
    z *= -1;

    return *this;
  }
};

// Driver Code
int main(void)
{
  Number n1(3, -2, -7);

  cout << "Before negating : " << endl;
  n1.display();

  Number n2 = -n1; // n1.operator-();---> Number(n1); // copy constructor 

  cout<< "\n After negating the value of object  are : " << endl;
  n1.display();
  n2.display();

  cin.get();
  cin.get();
  return 0;
}