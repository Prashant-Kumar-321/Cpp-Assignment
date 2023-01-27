#include<iostream>
#include<conio.h>
#include<unistd.h>

using namespace std;

namespace A
{
  float A;
}

int main()
{
  while(true)
  {
    float squ;
    cout<< "Enter a Number : "<< endl ;
    cin>> A::A;

    squ = A::A * A::A ;

    cout<< "Square of "<<A::A << " = "<< squ ;
    getch();
    system("cls");
  }

  return 0;
}
