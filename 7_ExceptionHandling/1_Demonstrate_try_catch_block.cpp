#include<iostream>
using namespace std; 

int ReadNum()
{
    int number; 
    cout<< "Enter a number: "; 
    cin>> number; 
    
    return number; 
}

// Driver Function; 
int main()
{
  int num; 

  try
  {
    num = ReadNum(); 
    if(num<10)
      throw num;    // Throw int exception 

    if(num>=10 && num<100)
      throw "two digit Number";  // Throw string exception 

    cout<< "This is "<< num<< endl; 
    
  }catch(int onedigit)
  {
    if(onedigit<0)
      cout<< "This is negative Number "<< endl; 
    else 
      cout<< "This is Single digit number"<< endl; 

  }catch(const char*s)
  {
    cout<< "TString exception is thrown"<< endl; 
    cout<< "This is two digit number"<< endl; 
  }

  return 0; 
}