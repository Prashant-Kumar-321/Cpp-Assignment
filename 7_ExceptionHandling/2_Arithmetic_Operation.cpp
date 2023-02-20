#include<iostream>
using namespace std; 

void ReadingParameter(float &,float &,char &); // function prototype 

// Code Driver 
int main()
{
  float num1, num2,ans; 
  char Operator;
  cout<< "Arithmetic Operation "<<endl<< endl;  
  ReadingParameter(num1, num2, Operator);

  try
  {
     if(Operator != '+' && Operator != '-' && Operator != '*' && Operator != '/')
       throw Operator; 

     switch (Operator)
     {
        case '-': 
          ans = num1 - num2; 
          break; 
        case '+': 
          ans = num1 + num2; 
          break; 
        case '*': 
          ans = num1 * num2; 
          break; 
        case '/': 
          if(num2 == 0)
              throw num2; 
          ans = num1 / num2; 
     }
     cout<< "Answer : "<< num1<< " "<< Operator<< " "<< num2<< " = "<< ans << endl; 
 
  }
  catch(const char oper) 
  {
     cout<< "\nException Caught..."<<"Bad Operator "<< endl; 
     cout<< oper<<" is an invalid Operator "<< endl; 
  }
  catch(float n)
  {
    cout<< num1<< "/"<< "0 = "<< "Not defined "<< endl; 
  }

  return 0; 
}

// Reading Parameter for calculation 
void ReadingParameter(float &num1, float &num2, char &Operator)
{
  cout<< "Enter First Number  : "; 
  cin>> num1;
   
  cout<< "Enter Operator      : "; 
  cin>> Operator ; 

  cout<< "Enter Second Number : "; 
  cin>> num2; 

}