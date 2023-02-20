#include<bits/stdc++.h>
using namespace std; 

class DataSet{
  float x,y; 
public: 
  DataSet(){
  }
  DataSet(float x, float y) : x(x), y(y) {
  }

  void insert(double x, double y)
  {
    this->x = x; 
    this->y = y; 
  }

  void display()
  {
    cout<< "x = "<< x<< " y = "<< y<< endl; 
  }

  void swap(DataSet*d)
  {
    DataSet temp = *this;
    *this = *d; 
    *d = temp; 
  }
}; 

// Driver code 
int main(void)
{
  DataSet d1,d2; 
  d1.insert(3.14, 4.14); 
  d2.insert(5.14, 6.14); 

  cout<< "Before swapping "<< endl; 
  d1.display(); 
  d2.display(); 

  d1.swap(&d2); 
  
  cout<< "After swapping" << endl; 
  d1.display(); 
  d2.display(); 

  return 0; 
}