#include<bits/stdc++.h>

#define Half 0.5
#define PI 3.1415926535

// Enumeration 
enum shpe // for shapes  
{
  rectangle = 1,
  triangle = 2,
  circle = 3,
  parallelogram = 4,  
}; 
enum Parameter // for parameter to be calulated of a shape 
{
  Area = 1,
  Par  = 2,
  Both = 3  
}; 

using namespace std; 

// classes 
class Shape // base 
{
protected: 
  double x,y;
public: 
  Shape(double a, double b = 0){
    x = a; 
    y = b; 
  }
  Shape(){
  }
  virtual~Shape(){
  }

  void set_data(double a, double b = 0){
      x = a; 
      y = b; 
  }

  virtual void display_area(){
    cout<< "404 Error "<< endl; 
    cout<< "Service is down temporarily"<< endl ; 
  }
  virtual void display_paramtr(){
    cout<< "404 error "<< endl; 
    cout<< "Service is down temporarily"<< endl; 
  }

}; 

// Drived classes of Shape 
class Triangle : public Shape
{
  double area, parametr; 
public: 
  Triangle(double a, double b): Shape(a,b){
  }
  Triangle(){
  }

  void display_area()
  {
    area = Half * x * y; 

    cout<< "Area of triangle = "<< area<<" squares units "<< endl; 
  }
  void display_paramtr()
  {
   
  }

}; 

class Rectangle : public Shape
{
  double area, parametr; 
public: 
  Rectangle(double a, double b): Shape(a,b){
  }
  Rectangle(){
  }

  void display_area(){
    area = x * y; 
    
    cout<< "Area of Rectangle = "<< area << " square units "<< endl; 
  }

  void display_paramtr(){
    parametr = 2 * (x + y); 

    cout<< "Parameter of Rectangle = "<< parametr << " units "<< endl; 
  }

}; 

class Circle: public Shape
{
  double area, circmf; 
public:
  Circle(double a): Shape(a){
  }
  Circle(){
  }

  void display_area(){
    area = PI * x * x; 

    cout<< "Area of Circle = "<< area<< " square units "<< endl; 
  }

  void display_paramtr(){
    circmf = 2 * PI * x; 

    cout<< "Circumference of Circle = "<< circmf << " units "<< endl; 
  }

}; 

class Parallelogram : public Shape
{
  double area;
  double parameter;  
public:
  Parallelogram(double a, double b): Shape(a,b){
    area = x*y; 
  }

  Parallelogram(){
  }

  void display_area()
  {
    area = x*y; 
    
    cout<< "Area of parallelogram = "<< area<< " squares unit "<< endl; 
  }
  void display_paramtr(){
    parameter = 2*(x+y);

    cout<< "Parameter of parallelogram = "<< parameter<< " units "<< endl;  
  }

}; 

// function to return object of different shapes according opt; 
Shape* shapeChoice(int opt) 
{
  switch(opt)
  {
    case rectangle: 
      return new Rectangle (0,0); 
    case triangle: 
      return new Triangle (0,0); 
    case circle: 
      return new Circle (0); 
    case parallelogram: 
      return new Parallelogram(); 

    default: 
      return new Shape (0,0); 
  }
}

// Driver code 
int main (void)
{
 int opt; // holding user choice 
 double x=0, y=0; // holding dimension of figs.

 Shape*shp; 

 cout<< "Pick your choice (For Rect = 1, and so on..)"<< endl ; 
 cout<< "1.Rectangle "<< endl; 
 cout<< "2.Triangle "<< endl; 
 cout<< "3.Cirlce"<< endl; 
 cout<< "4.Parallelogram "<< endl;  

 cin >>opt;

 shp = shapeChoice(opt);

 // taking input of dimensions of   fig.
 switch(opt)
 {
  case rectangle:  // Rect
    cout<< "Enter Dimension of Rectangle : "<< endl; 
    cout<< "Length: " ; 
    cin>> x; 
    cout<< "Width: "; 
    cin>> y; 
    break;

  case triangle:  // Tri
    cout<< "Enter Dimesion of Triangle : "<< endl; 
    cout<< "Height: ";
    cin>> x; 
    cout<< "Base : "; 
    cin>> y; 
    break; 

  case circle: // Cir
    cout<< "Enter Dimension of Circle : "<< endl; 
    cout<< "Radius : ";
    cin>> x; 
    break;
  
  case parallelogram: 
    cout<< "Enter Dimension of Parallelogram : "<< endl; 
    cout<< "Base : "; 
    cin>> x; 
    cout<< "Height: "; 
    cin>>y; 
    break; 

  default : 
    exit(0);  
 }
  
  shp->set_data(x,y); // intializing value 

 cout<< " What do you want to calculate ?(choice Corresponding Number of option)"<< endl; 
 cout<< "1.Area "<< endl; 
 cout<< "2.Parameter"<< endl; 
 cout<< "3.Both "<< endl; 

 cin>>opt; 

 switch(opt)
 {
  case Area: 
    shp->display_area(); 
    break;

  case Par: 
    shp->display_paramtr(); 
    break;

  case Both: 
    shp->display_area(); 
    shp->display_paramtr(); 
    break; 

  default: 
    cout<< "Invalid choice "<< endl; 
 }

  delete shp;
  cin.get();  
  return 0; 
}