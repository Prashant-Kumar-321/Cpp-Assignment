#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<unistd.h>

using namespace std;

// calculating n!
unsigned long long fact(unsigned int n)
{
  if (n == 0 || n == 1)// Base Condition
    return 1;

  return (n * fact(n-1)); // Self Work and Assumption
}

// Calculating nCr
unsigned int comb(unsigned int n, unsigned int r)
{
  return (fact(n) / (fact(n-r)*fact(r)));
}

void DrawPascalTriangle(unsigned int n)
{
  int i, j; // maintaining loop
  int flag = 1;

  for(i=0; i<n; i++)
  {
    flag = 1;// Have to start row with printing
    cout<<"\t\t\t";
    int r=0;
    for(j=0; j<=(n-1+i); j++)
    {
      if( j<(n-1-i) ) // starting space in each row;
        cout<< "  ";
      else // Alternative printing between " " and "*" will start
      {
        if(flag)
        {
          cout<<setw(2)<<left<< comb(i,r++);// ncr
          flag = 0;  // Alternating blank and star
         //r++;
        }
        else
        {
          cout<< "  ";
          flag = 1;  // Alternating blank and star
        }
      }
    }
    cout<< endl ;
  }
}

unsigned int comb(int n, int r)
{
  if(n==r || r==0) return 1; // base condition

  return comb(n-1,r-1) + comb(n-1,r);
}

void DrPascalTriangle(int len)
{
  int n,j,r;

  for(n=0; n<len; n++)
  {
    cout<<"\t\t\t";

    // For starting space in each row
    for(j=0; j<len-1-n; j++)
    cout<<"  ";

    // printing the ncr
    for(r=0; r<=n; r++)
      {
        cout<<setw(4)<<left <<comb(n,r);
        sleep(1);
      }

    cout<<endl ;
  }
}

/* driver code */

int main()
{
  unsigned int n = 10;
  cout<< "Enter the value of n";
  cin>>n;

  system("cls");

  cout<<setw(60)<< "Pascal Triangle \n\n\n";
  DrawPascalTriangle(n); // Function call to draw pascal triangle;

  cout<< "\n\n\n\n";
  DrPascalTriangle(n);


  return 0;
}
