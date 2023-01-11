#include<iostream>
#include<conio.h>
#include<unistd.h>

using namespace std ;

int main()
{
  while(true)
  {
    float n1, n2;// n1= firstNumber, n2 = secondNumber

    cout<< "Enter two number : ";
    cin>>n1 >> n2;

    cout<< "Addition of "<<n1 << " and " << n2<< " is "<<(n1+n2) << endl ;

    getch();
    system("cls");
  }
  return 0;
}
