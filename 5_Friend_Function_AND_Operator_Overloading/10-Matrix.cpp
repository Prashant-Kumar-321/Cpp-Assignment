#include <iostream>
#include <conio.h>
#include<iomanip>

using namespace std;

class Matrix
{
  float matrx[3][3] = {0}; 

 public:
  // Constructor
  Matrix() {}
  Matrix(float (*a)[3])
  {
    int i, j;
    for (i = 0; i < 3; i++)
      for (j = 0; j < 3; j++)
        matrx[i][j] = a[i][j];
  }

  // friend function operator>> operator<<
  friend istream &operator>>(istream &cin, Matrix &m)
  {
    int i, j;
    // taking input from user
    for (i = 0; i < 3; i++)
      for (j = 0; j < 3; j++)
      {
        cin >> m.matrx[i][j];
      }
    
    return cin; 
  }

  friend ostream &operator<<(ostream &cout, Matrix m)
  {
    int i, j;
    // taking input from user
    for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 3; j++)
      {
        cout <<setw(4)<< m.matrx[i][j]<<" ";
      }
      cout<< endl; 
    } 
    
    return cout; 
  }

  // Addition matrix object
  Matrix operator+(Matrix add)
  {
    int i,j; 
    for(i=0; i<3; i++)
      for(j=0; j<3; j++)
      {
        add.matrx[i][j] += matrx[i][j]; 
      }
    
    return add; 
  }
  // subtracting two matrix 
  Matrix operator-(Matrix sub)
  {
    int i,j; 
    for(i=0; i<3; i++)
      for(j=0; j<3; j++)
      {
        sub.matrx[i][j] = matrx[i][j] - sub.matrx[i][j]; 
      }
    
    return sub; 
  }

  Matrix operator*(Matrix M)
  {
     Matrix multi;
     int i,j,k; 
     int sum = 0; 

     // Multiplying two matrix; 
      for(i=0; i<3; i++)
        for(j=0; j<3; j++)
        {
          for(k=0; k<3; k++)
          {
            sum += (matrx[i][k] * M.matrx[k][j]); 
          }
          multi.matrx[i][j] = sum ; 
          sum = 0; 
        }

      return multi; 
  }
};


// Main function Driver Code 
int main()
{  
    float arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} }; 
    // cout<< "Enter Elements of (3 X 3) Matrix: "<< endl; 
    // for(int i=0; i<3; i++)
    // {
    //   for(int j=0; j<3; j++)
    //   {
    //     cin>> arr[i][j]; 
    //   }
    // } 

    Matrix M1(arr), M2 = M1; //(copy constructor will be called to intialize m2 with m1) 
    
    // displaying the matrix; 
    cout<<"Matrix M1: "<< endl; 
    cout<< M1<< endl; 

    cout<< "Matrix M2 : "<< endl; 
    cout<< M2<< endl<< endl; 
    
    // Addition and substraction of two matrix; 
    cout<< "Enter Elements of Matrix 1(3x3): "<< endl; 
    cin>> M1; 
    cout<< "Enter Elements of Matrix 2(3X3): "<< endl; 
    cin>> M2; 

    Matrix sum = M1 + M2; 
    Matrix sub = M1 - M2; 
    Matrix multi = M1 * M2; 

    cout<< "M1 + M2 = \n"<< sum << endl; 
    cout<< "M1 - M2 = \n"<< sub<< endl; 
    cout<< "M1 x M2 = "<< endl << multi<< endl; 

    getch(); 
    return 0; 
}