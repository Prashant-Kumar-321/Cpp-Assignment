#include<iostream>
#include<iomanip>

using namespace std; 

// class design 
class Matrix // 2 X 2 matrix 
{
protected: 
  int a,b,c,d; 
public: 
  Matrix(int p, int q, int r, int s)
  {
    a = p; 
    b = q; 
    c = r; 
    d = s; 
  }
  Matrix(){
  }
  void set_matrix(int a ,int b, int c, int d)
  {
    this->a = a; 
    this->b = b; 
    this->c = c; 
    this->d = d; 
  }

}; 

class Calculate_Determinant: public Matrix
{
  int dtermnant; 
  void calculate()
  {
    dtermnant = a*d - b*c ; 
  }

public: 
  Calculate_Determinant(int a, int b, int c, int d): Matrix(a,b,c,d){
  }
  Calculate_Determinant(){
  }

  void display_detrmnant()
  {
    cout<< "|"<<a<< " "<<setw(3)<< b<< "|"<< endl;
    cout<< "|"<<c<< " "<<setw(3)<< d<< "|"<< endl; 
  }

  int getDetrmnt()
  {
    calculate(); 
    return dtermnant; 
  }

}; 


int main()
{
  Calculate_Determinant D1(2,5,9,-1); // 2X2 determinant

  // taking input form user 
  int *ptr = new(nothrow)int[4]; 
  int n = 4; 
  if(!ptr) // if Memory allocation failed 
  {  
    cout<< "Your computer don't have enough space to RUN this APPLICATION "<< endl; 
    return 0;  
  }
  cout<< "Enter 4 elements of determinant (row wise)"<< endl; 
  for(int i=0; i<n; i++){
    cin>>ptr[i]; 
  }
  system("Cls"); 
  D1.set_matrix(ptr[0], ptr[1], ptr[2],ptr[3]); 

  D1.display_detrmnant(); 

  int dtrmnt = D1.getDetrmnt(); 
  cout<< "Determinant = "<< dtrmnt<< endl; 

  // releasing memory 
  delete ptr; 
  cin.get();
  cin.get();  
  return 0; 
}