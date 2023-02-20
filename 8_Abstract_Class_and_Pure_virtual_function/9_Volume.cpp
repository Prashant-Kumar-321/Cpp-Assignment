#include<iostream>
using namespace std;

#define PI 3.141592
enum shape
{
cube = 1, 
sphere = 2,
} ; 

// Base 
class Volume
{
protected:
  double dim, vol; 
public: 
  Volume(double a): dim(a){
  }
  Volume(){
  }
  virtual~Volume(){ // virtaul destructor of base class (it must be virtaul)
  }

  double getVolume(){
    return vol; 
  }

  void Assign(double a)
  {
    dim = a; 
  }

  virtual void display_volume() = 0 ; // pure virtual function 

}; 

//1.Derived class 
class Cube: public Volume
{
public: 
  Cube(double side): Volume(side){
  }
  Cube(){
  }

  void display_volume(){ // Definition of pure virtual function of volume base class 
    vol =dim*dim*dim; 

    cout<<"Volume of Cube having side "<<dim<< " = "<< vol<<" cubic units"<< endl; 
  }

}; 
class Sphere: public Volume
{
public: 
  Sphere(double radius): Volume(radius){
  }
  Sphere(){
  }

  void display_volume(){ // Definition of pure virtual function of volume base class 
    vol = 4/double(3) * PI * dim * dim * dim; 

    cout<<"Volume of Sphere having radius "<<dim<< " = "<< vol<<" cubic units"<< endl; 
  }

}; 

// Driver code 
int main()
{
  Volume *volptr; 

  volptr = new Cube(3); 
  volptr->Assign(2.89); 
  volptr->display_volume(); 
  delete volptr; 

  volptr = new Sphere(2);
  volptr->Assign(4.18);  
  volptr->display_volume(); 
  delete volptr; 

  int opt; 
  double dim;  
  cout<< "Choose given Shape "<< endl; 
  cout<< "1.Cube"<< endl; 
  cout<< "2.Sphere"<< endl; 
  cin>> opt; 

  Volume* choiceShape(int); // function prototype (local scope within main function ); 
  volptr = choiceShape(opt); 
 
  switch(opt)
  {
    case cube:
      cout<< "Enter Side length of cube "; 
      cin>>dim; 
      break; 
    case sphere: 
      cout<< "Enter Radius of sphere: "; 
      cin>>dim; 
      break; 
  }

  volptr->Assign(dim); 
  volptr->display_volume(); 

  delete volptr; 


  return 0; 
}

// shape choice 
Volume* choiceShape(int opt)
{
  switch(opt)
  {
    case cube: 
      return new Cube(); 

    case sphere: 
      return new Sphere(); 

    default: 
      cout<< "invalid entry "<< endl; 
      exit(0); 
  }
}