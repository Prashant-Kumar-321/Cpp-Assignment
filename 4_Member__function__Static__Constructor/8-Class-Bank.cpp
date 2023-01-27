#include<iostream>
#include<conio.h>

using namespace std;

namespace pkg
{
  class Bank
  {
    int prin, yr;
    float intrst;

  public:
    Bank(int p, int y, float in)
    {
      prin = p;
      yr = y;
      intrst = in;
    }
    Bank(){}

    /*************************************/
    // setter function
    void setPrin(int p)
    {
      prin = p;
    }

    void setYr(int y)
    {
      yr = y;
    }

    void setIntrst(float i)
    {
      intrst = i;
    }

    float Simple_Interest()
    {
      return (prin*intrst*yr)/100;
    }
    float Total_Value()
    {
      return ((prin*intrst*yr)/100 + prin) ;
    }

  };
}
using pkg::Bank; // using namespace declaration

// Driver code

int main(void)
{
  Bank customer(1200, 5, 15); // prin = 1200, yr = 5; , intrst = 15%

  float a;
  // taking all parametre form user
  cout<< "Calculate simple interest "<< endl;
  cout<< "Principle amount(RS) = ";
  cin>> a;
  customer.setPrin(a);

  cout<< "Annual Interst(%) = ";
  cin>> a;
  customer.setIntrst(a);

  cout<< "Time period (yr) = ";
  cin>> a;
  customer.setYr(a);

  float simpleIntrst = customer.Simple_Interest();

  cout<< "Interst Eearned = "<< simpleIntrst<< endl;
  cout<< "Total value = "<< customer.Total_Value()<< endl;

  getch();
  return 0;
}





















