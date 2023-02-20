#include<iostream>
using namespace std; 

class Proof{
protected: 
  int a, b, c; 

public:
  Proof(int x, int y, int z) : a(x), b(y), c(z){
  }
  Proof(){
  }
  virtual~Proof(){
  }

}; 

// Child class 
class Compute: public Proof
{
public: 
  Compute(int a, int b, int c): Proof(a,b,c){
  }
  Compute():Proof(){
  }
  
  void set_Dimension(int x, int y, int z)
  {
    a = x; 
    b = y; 
    c = z; 
  }
  
  bool isRATri()
  {
    if(a*a + b*b == c*c)
      return true; 
    else if(a*a + c*c == b*b)
      return true; 
    else if(b*b + c*c == a*a)
      return true; 
    else 
      return false; 
  }
}; 


// Driver Code 
int main(void) 
{
  int a,b,c; 
  a = 12, b = 14, c = 15; 

  Compute T1(a,b,c);

  cout<< "Enter Dimension of Triangle "<< endl; 
  cin>>a>>b>>c; 

  T1.set_Dimension(a,b,c); 

  if(T1.isRATri()) 
    cout<< "Triangle is Right angled triangle "<< endl;
  else 
    cout<< "Triangle is not Right angled triangle"<< endl;
    
  cin.get(); 
  cin.get(); 
  return 0; 
}