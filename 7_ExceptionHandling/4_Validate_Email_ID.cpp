#include<iostream>
#include<cstring>
using namespace std; 

bool isValidEmailId(char*EmailId)
{
  int AToffset = -1; // position of @ char in email id 
  int i; 
  for(i=0; EmailId[i] != '\0'; i++)
  {
    if(EmailId[i] == '@')
      AToffset = i;   
  }

  if(AToffset == -1 || AToffset == 0 || AToffset == strlen(EmailId) - 1) // @ is not present || @ is present at first positin || @ is prisent at last positon 
    return false; 

  return true; // email id is valid 
}
// reading emaid id 
void Read_EmailId(char*email)
{
  cout<< "Enter email id "; 
  cin>> email; 
}

// code Driver
int main()
{
    char emailid[100]; 
    Read_EmailId(emailid); 
     
     try
     {
       if(isValidEmailId(emailid))
        cout<< "Valid email id "<< endl; 
       else
        throw "Not valid "; 
     }
     catch(const char*e)
     {
       cout<<"Not valid Email id "<< endl; 
     }
     
    return 0; 
} 


