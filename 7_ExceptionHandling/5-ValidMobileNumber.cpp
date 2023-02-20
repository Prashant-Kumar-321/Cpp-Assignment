#include<iostream>
using namespace std; 

void Read_Number(long long &Number)
{
  cout<< "Enter Your Mobile Number : ";
  cin>>Number; 
}

bool Validate_Mobile_Number(long long number)
{
  int cout=0;

  if(number<0) return false;  // number cann't be negative;

   while(number)
   {
     cout++; 
     number/=10; 
   }

   if(cout==10)
     return true; 

   return false ; // not valid number; 
}

int main()
{
  long long Mob_Number; 
  Read_Number(Mob_Number); 

  try
  {
     if(Validate_Mobile_Number(Mob_Number))
        cout<<Mob_Number<< " is valid "<< endl; 
    else 
     throw false; 
  }
  catch(bool v)
  {
    cout<< Mob_Number<< " is not valid "<< endl; 
  }
  
  return 0; 
}