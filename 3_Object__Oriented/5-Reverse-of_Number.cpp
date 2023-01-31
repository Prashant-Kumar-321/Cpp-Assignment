#include<iostream>
#include<conio.h>
using namespace std;

class ReversNum
{
  int Num, rev;


public:
  // constructor
  ReversNum(int a)
  {
    Num = a;
  }
  ReversNum() {}

  // >> operator operloading to take direct input in my object;
  friend istream& operator>> (istream&, ReversNum&);

  void revNum() // member function reversing the int number
  {
    int tem = Num;
    rev = 0;

    for(tem; tem!=0; tem /=10)
      rev = rev *10 + tem%10;
  }

 // Getter function of Number stored in object and and its reverse number ; 
  int getNum()
  {
    return Num;
  }
  int revNO()
  {
    return rev;
  }

};
  // Definition of friend function
  istream& operator>> (istream &is, ReversNum &num)
  {
    cin>>num.Num;
    return is;
  }

  // driver code
  int main()
  {
    ReversNum n1(234), n2(-5679);

    cout<< "Enter a Number : ";
    cin>> n1;

    n1.revNum(); 
    cout<< "Reverse Num of "<< n1.getNum()<< " = "<< n1.revNO() << endl;

    return 0;
  }