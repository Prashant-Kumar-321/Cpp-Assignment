#include<bits/stdc++.h>
#define Half 0.5
#define PI 3.14159265359

using namespace std; 

class Shape
{
protected: 
  double x, y; 
public: 
  Shape(double a, double b=0){
    x = a; 
    y = b; 
  }
  Shape(){
  }
  virtual ~Shape(){
  }
 
  // instance member function 
  void set_data (double a, double b=0){ 
    x = a; 
    y = b; 
  }

  virtual void display_area(){
   cout<< "Error 404 "<< endl;
   cout<< "Service is temporarily close "<< endl;  
  }
}; 

// child class 
class Triangle: public Shape
{
  double area; 
public:
  Triangle(double a, double b) : Shape(a,b){  // calling constructor of shape class to 
  }
  Triangle(){
  }

  void display_area()
  {
    area = Half * x * y;

    cout<< "Area of triangle = "<< area<<" square units "<< endl;  
  }
};

class Rectangle: public Shape
{
  double area; 
public: 
  Rectangle(double a, double b) : Shape(a,b) {
  }
  Rectangle(){
  }

  void display_area(){
    area = x * y; 

    cout<< "Area of Rectangle = "<< area<< " square units"<< endl; 
  }
};

class Circle: public Shape
{
  double area; 
public: 
  Circle(double a): Shape(a){
  }
  Circle(){
  }

  void display_area()
  {
    area = PI * x * x; 

    cout<< "Area of circle = "<< area<< " square units "<< endl; 
  }

}; 

Shape* shapeChoice(int opt)
{
  switch(opt)
  {
    case 1:
      return new Rectangle(0,0); 
    case 2: 
      return new Triangle(0,0); 
    default: 
      return new Shape; 
    case 3: 
      return new Circle(0); 
  }
}

// Driver code 
int main(void)
{
  Shape*ptr; 

  // Triangle object 
  ptr = new Triangle(); // Dyanamically created object of Triangle class 

  ptr->set_data(8,6); // (base, height); 
  ptr->display_area(); 

  delete ptr;

  //Rectangle object 
  ptr = new Rectangle(8,4); 
  ptr->display_area(); 

  delete ptr;
  ptr = new Circle(3.14); 
  ptr->display_area(); 



  cout<< endl<< endl; 
  short int opt;
  unsigned int x,y=0; // dimension of shape 

  cout<< "choose option given below (For Rectangle = 1, ... etc.)"<< endl;  
  cout<< "1.Rectangle: "<<endl; 
  cout<< "2.Triangle :  "<<endl;
  cout<< "3.Circle :  "<<endl;

  cin>>opt; // user choice 

  ptr = shapeChoice(opt);

  // taking input of dimensions of shape 
  switch(opt)
  {
    case 1: 
      cout<< "Enter Length and breadth of rectangle: "; 
      cin>>x>>y; 
      break; 
    case 2: 
      cout<< "Enter Height and base of triangle : "; 
      cin>>x>>y; 
      break;
    case 3: 
      cout<< "Enter radius of circle : "; 
      cin>>x; 
      break; 
  }

  ptr->set_data(x,y); 
  ptr->display_area(); 

  delete ptr; 
  return 0;
}


