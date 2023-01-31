#include<iostream>
#include<conio.h>

using namespace std;

class Greatest
{
  float num[3];
  float max; 

public:
  // constructor
  Greatest() {}
  Greatest(int a, int b, int c)
  {
    num[0] = a;
    num[1] = b;
    num[2] = c;
  }

  friend istream& operator>> (istream &is, Greatest &g) // operator overloading to take direct input in my object using cin>>
  {
    cin>> g.num[0]>> g.num[1]>> g.num[2];
    return cin;
  }

  // operator overloading to print values of my object
  friend ostream& operator<< (ostream&os, Greatest&g)
  {
    cout<< g.num[0]<< " "<< g.num[1]<< " "<< g.num[2]<< " ";

    return cout;
  }

  float MaxNum() // member function finding max among three number
  {
    max = (num[0]>num[1])? num[0] : num[1];
    max = (max > num[2])? max : num[2];

    return max;
  }

  float Max2()
  {
    float max1, max2;

    if(num[0]> num[1])
    {
      max1 = num[0];
      max2 = num[1];
    }
    else
    {
      max1 = num[1];
      max2 = num[2];
    }

    if(max1< num[2])
    {
      max2 = max1;
      max1 = num[2];

    }
    else if(max2 < num[2])
     max2 = num[2];


    return max2;
  }

  // getter function of max
  float getMax()
  {
    return max; 
  }

};

// driver code
int main()
{
  Greatest num;

  cout<< "Enter three Numbers : ";
  cin>> num;

  system("cls");
  cout<< "Three numbers are : ";
  cout<< num<< endl;
  cout<< " Greatest Number = "<< num.MaxNum()<< " or = "<< num.getMax()<< endl;
  cout<< " Second greatest number = "<< num.Max2()<< endl;

  return 0;
}




























