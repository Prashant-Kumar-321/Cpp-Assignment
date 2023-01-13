#include<iostream>
using namespace std;

void DrawPascalTriangle(unsigned int n)
{
  int i, j; // maintaining loop
  int flag = 1;

  for(i=0; i<n; i++)
  {
    flag = 1;// Have to start row with printing
    cout<<"\t\t\t";
    for(j=0; j<=(n-1+i); j++)
    {
      if( j<(n-1-i) ) // starting space in each row;
        cout<< " ";
      else // Alternative printing between '_" and * will start
      {
        if(flag)
        {
          cout<< "*";
          flag = 0;  // Alternating blank and star
        }
        else
        {
          cout<< " ";
          flag = 1;  // Alternating blank and star
        }
      }
    }
    cout<< endl ;
  }
}

int main()
{
  cout<< "Pascal Triangle \n";
  DrawPascalTriangle(6); // Function call to draw pascal triangle;

  return 0;
}
