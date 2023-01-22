#include<iostream>
#include<conio.h>
using namespace std;

class Largest__Number__
{
 float n1,n2,n3; // private member variables

 public:
  Largest__Number__(float n1,float n2, float n3)
  {
    n1 = n1;
    n2 = n2;
    n3 = n3;
  }
  Largest__Number__(){}

  // friend fun operator overloading has been done;
  friend istream& operator>> (istream&is, Largest__Number__&n) // operator overloading of >> operator with cin objec to take input in my object
  {
    cin>>n.n1>> n.n2>> n.n3;

    return is;
  }

  // instance member function to get max of three number
  float getLargestNum()
  {
    float max = (n1>n2) ? n1: n2; // first find max in n1 and n2
     max = (max > n3) ? max : n3; // find max in n3 and max(n1,n2)

    return max;
  }

};

// driver code
int main()
{
  Largest__Number__  num1;

  cout<< "Enter three numbers : \n";
  cin >> num1;

  cout<< "Maximum = "<< num1.getLargestNum() << endl;

  getch();
  return 0;
}


































