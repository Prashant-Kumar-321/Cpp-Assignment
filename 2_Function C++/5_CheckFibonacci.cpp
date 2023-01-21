#include<iostream>

using namespace std;

// fibo function decalration and definition
unsigned long long fibo(int n)
{
  if(n==0)
    return 0;
  if(n==1 || n==2)
    return 1;

  return fibo(n-1)+fibo(n-2) ;
}


class Fibonacci
{
public:
  int num;

  void checkFibo(); // checkFibo function declaration

  Fibonacci(int a = 0) // default argument constructor;
  {
    num = a;
    cout<< "Constructor has done his job"<<endl ;
  }

  ~Fibonacci() // Destructor
  {
   cout<< "\nDestructor has done it's job succesfully"<< endl;
  }

};
 void Fibonacci::checkFibo()
 {
   for(int i=0; true; i++) // infinite loop
   {
     if(fibo(i)>num)
     {
       cout<< num  << " isn't a term in a fibonacci series "<< endl ;
       break;
     }
     else if(fibo(i) == num)
     {
       cout<< num<< " is a term in a fibonacci series "<< endl ;
       break;
     }
   }
 }


int main()
{
  //Taking input from user
  Fibonacci a(5);// creating a object of Fibonacci class
  cout<< sizeof(a)<< endl ;
  cout<< "Enter a Number to check if it is in fibonacci series or not "<< endl;
  cin>> a.num;

  a.checkFibo();

  return 0;
}


