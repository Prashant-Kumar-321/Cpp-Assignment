#include<iostream>
using namespace std; 

void Read_emailId(char *emailId)
{
  cout<< "Enter Email ID: "; 
  cin>> emailId; 

}

int isValidEmailId(char*emailId)
{
  int AToffset = -1; // position of @
  int Dotoffset = -1; // position of period . 
  int length = 0, i; 

  for(i=0; emailId[i] != '\0'; i++)
  {
    if(emailId[i] == '@')
        AToffset = i;

    else if(emailId[i] == '.')
        Dotoffset = i; 

    length++; 
  }

  if(AToffset == -1 || Dotoffset == -1)
      return 0; 
  if(Dotoffset<AToffset)
      return 0; 
  if(Dotoffset-AToffset == 1)
     return 0; 
  return (Dotoffset<length-2); 
}

int main()
{
  char emailId[100]; 
  Read_emailId(emailId); 

  try
  {
    if(isValidEmailId(emailId))
        cout<< "Valid email id "<< endl; 
    else
        throw 0; 
  }
  catch(int e)
  {
    cout<< "Email ID is not Valid "<< endl; 
  }
  catch(...)
  {
    cout<< "Unkown Exception "<< endl; 
  }

  return 0; 
}