#include<iostream>
#include<conio.h>
using namespace std; 

enum option
{
square = 1, 
parallelogram = 2,
}; 

// class design 
class Shape
{
protected:
  double x, y; 

public:
  Shape(double a, double b = 0): x(a),y(b){
  }
  Shape(){
  }
  virtual~Shape(){
  }

  virtual void set_Data(double a, double b = 0){
  }

  virtual void display_area(){
    cout<< "404 error "<<endl; 
    cout<< "Server is Down"<< endl; 
  }

};

// derived classes 
class Square: public Shape
{
  double area; 
public:
  Square(double x): Shape(x){
    area = x*x; 
  }
  Square(){
  }

  void set_Data(double a, double) // function overriding
  {
      x = a;
      area = x*x;  
  }

  void display_area()
  {
    cout<< "Area of Square having side "<< x<< " = "<< area<< " square units "<< endl; 
  }

};


class Parallelogram : public Shape
{
  double area; 
public:
  Parallelogram(double a, double b): Shape(a,b){
    area = x*y; 
  }

  Parallelogram(){
  }

  void set_Data(double a, double b){
    x = a; 
    y = b; 
    area = x*y; 
  }

  void display_area()
  {
    cout<< "Area of Parallelogram having base "<< x<< " and height "<< y<< " = "<<area<< " square units "<< endl; 
  }
}; 

Shape* choiceShape(int opt)
{
  switch(opt)
  {
    case square: 
      return new Square(); 

    case parallelogram: 
      return new Parallelogram();

    default: 
      return new Shape(); 
  }
}

// taking input in my object
void TakeINput(Shape*ptr, int opt)
{
 double x,y=0; 
  switch(opt)
  {
    case square: 
      cout<< "Enter side length of square: "; 
      cin>>x;
      ptr->set_Data(x); 
      break; 
    case parallelogram: 
      cout<< "Enter base ";
      cin>>x; 
      cout<< "Height: "; 
      cin>> y;
      ptr->set_Data(x,y);  
      break;
  }
}

// driver code 
int main()
{
  int opt; 

  cout<< "Choose one of the given shape "<<endl; 
  cout<< "1.Square "<< endl; 
  cout<< "2.Parallelogram "<< endl; 
  cin>>opt; 

  Shape*ptr = choiceShape(opt); 

  // taking input; 
  TakeINput(ptr, opt); 
  system("cls"); // clear console screen 
  ptr->display_area(); 

  return 0; 
}