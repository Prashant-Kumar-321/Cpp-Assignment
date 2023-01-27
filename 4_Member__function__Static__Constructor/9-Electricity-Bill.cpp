#include<iostream>
#include<conio.h>
using namespace std;

class Bill
{
  int met_No;
  string name;
  float ele_consmptn;

  public:
      Bill(string nm, unsigned int mNO, float ele_con)
      {
        name = nm;
        met_No = mNO ;
        ele_consmptn = ele_con;
      }
      Bill(){  } // default constructor

     void get();
     float calculateBill();
};

void Bill::get()
{
  cout<< "Consumer Name                      : ";
  fflush(stdin);
  getline(cin, name);

  cout<< "Meter NO                           : ";
  cin>> met_No;

  cout<< "Eelectricity consumption (in unit) : ";
  cin>> ele_consmptn;
}

float Bill::calculateBill()
{
  if(ele_consmptn<=100)
    return (ele_consmptn*1.20);
  else if(ele_consmptn<=200)
    return (ele_consmptn*2);
  else
    return (ele_consmptn*3);
}

// Driver code
int main(void)
{
  Bill consummer1("prashant Kumar Gupta", 182392, 126.76);

  cout<< "Consumer Details: \n"<< endl;
  consummer1.get();
  cout<< "Eletricity bill(Rs) = ";
  cout<< consummer1.calculateBill()<<endl;

  return 0;
}






















