#include<iostream>
#include<conio.h>
using namespace std;

class ReversNum
{
  int Num;

public:
  // constructor
  ReversNum(int a)
  {
    Num = a;
  }
  ReversNum() {}

  // >> operator operloading to take direct input in my object;
  friend istream& operator>> (istream&, ReversNum&);

  int revNum() // member function reversing the int number
  {
    int tem = Num;
    int ans = 0;

    for(tem; tem!=0; tem /=10)
      ans = ans *10 + tem%10;

    return ans;
  }

  int getNum()
  {
    return Num;
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

    cout<< "Reverse Num of "<< n1.getNum()<< " = "<< n1.revNum() << endl;

    return 0;
  }
















