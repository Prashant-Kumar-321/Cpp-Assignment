#include<iostream>
#include<conio.h>
#include<cmath>
#include<cstdlib>
#include<iomanip>

#define PI 3.141592

using namespace std;

class Area
{
// We can also create a class having only member function
// These sort of class's object get 1 byte memory in RAM

public:
  // member function
  // calculating Area of different size

  float Asqu(float a) // square
  {
    return a*a;
  }
  float Arect(float l, float w) // Rectangl
  {
    return (l*w);
  }
  float Atri(float a, float b, float c) // triangle
  {
    float s  = (a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
  }
  float Acir(float r) // circle
  {
    return PI * r*r;
  }
  float Atrap(float l,float b, float h) // trapezoid
  {
    return (h*(l+b))/2;
  }
  float Aparallelogram(float b, float h) // Parallelogram
  {
    return b*h;
  }
  float Aoval(float Majr, float Minr) // Oval
  {
    return PI * Majr * Minr;
  }
  float Akite(float d1, float d2) // Kite
  {
    return d1*d2/2;
  }

};

int main()
{
  system("color 67");
  Area a;
  //cout<<"Size of object a having no member variable is "<< sizeof(a)<< endl ;
  int option;
  float *p;

    while(1) // program loop;
    {

    cout<< setw(20)<< "";
    cout<< "Area calculator of different 2D Shapes "<< endl ;
    cout<< setw(20)<< ""<< setw(38)<< setfill('*')<< "" <<endl ;
    cout<< "Choose one of the following options by Respective Number :---"<< endl;
    cout<< "1.Square "<<endl;
    cout<< "2.Rectangle "<<endl;
    cout<< "3.Triangle "<<endl;
    cout<< "4.Circle "<<endl;
    cout<< "5.Trapizoid "<<endl;
    cout<< "6.Parallelogram  "<<endl;
    cout<< "7.Oval"<< endl;
    cout<< "8.Kite"<<endl;
    cout<< "9.Quit"<< endl;

    cin>> option ;

    switch(option)
    {
    case 1:
     p = (float *)malloc(4);
     system("cls");
     cout<<setw(20)<<setfill(' ')<< ""<< "Shape : SQUARE "<< endl;
     cout<< "Enter length of \n Side : ";
     cin>>p[0];
     cout<< " Area = "<< a.Asqu(p[0])<< " square units "<< endl;
     free(p);
     break;
    case 2:
      p = (float*)malloc(2*sizeof(float));
      system("cls");
      cout<<setw(20)<<setfill(' ')<< ""<< "Shape : RECTANGLE "<< endl;
      cout<< "Enter its dimension "<<endl;
      cout<< "Length: ";
      cin>>p[0];
      cout<< "Width: ";
      cin>> p[1];

      cout<< "Area = "<< a.Arect(p[0], p[1])<< " square units "<< endl;
      free(p);
      break;
    case 3:
      p = (float*)malloc(3*sizeof(float));
      system("cls");
      cout<<setw(20)<<setfill(' ')<< ""<< "Shape : TRIANGLE "<< endl;
      cout<< "Enter its side length "<< endl;
      cout<< "a : ";
      cin>> p[0];
      cout<< "b: ";
      cin>>p[1];
      cout<< "c: ";
      cin>> p[2];

      cout<< "Area of triangle = "<< a.Atri(p[0], p[1], p[2])<< " squares units "<< endl;
      free(p);
      break;
    case 4:
      p = (float*)malloc(1*sizeof(float));
      system("cls");
      cout<<setw(20)<<setfill(' ')<< ""<< "Shape : CIRCLE "<< endl;
      cout<< "Enter radius "<< endl;
      cout<< "Radius: ";
      cin>> p[0];

      cout<< "Area = "<< a.Acir(p[0])<< " squares units"<< endl ;
      free(p);
      break;
    case 5:
      p = (float *)malloc(3*sizeof(float));
      system("cls");
      cout<<setw(20)<<setfill(' ')<< ""<< "Shape : TRAPEZOID "<< endl;
      cout<< "Enter length of its parallel sides "<< endl;
      cout<< "Side 1: ";
      cin>> p[0];
      cout<< "Side 2: ";
      cin>> p[1];
      cout<< "Height: ";
      cin>> p[2];

      cout<< "Area = "<< a.Atrap(p[0],p[1], p[2])<< " squares unit"<< endl;
      free(p);
      break;
    case 6:
      p = (float*)calloc(2,sizeof(float));
      system("cls");
      cout<<setw(30)<<setfill(' ')<<"" << "Shape: PARALLELOGRAM \n"<< endl;
      cout<< "Enter its dimension "<< endl;
      cout<< "Base: ";
      cin>> p[0];
      cout<< "Height: ";
      cin>> p[1];

      cout<< "Area = "<< a.Aparallelogram(p[0],p[1])<< " square units "<< endl;
      break;
    case 7:
      p = (float*)calloc(2,sizeof(float));
      system("cls");
      cout<< setw(30)<<setfill(' ')<< ""<< "Shape: OVAL\n\n";
      cout<< "Enter its dimension"<< endl;
      cout<<  "Major radius: ";
      cin>> p[0];
      cout<< "Minior radius: ";
      cin>> p[1];

      cout<< "Area = "<< a.Aoval(p[0],p[1])<< " square units "<< endl;
      break;
    case 8:
      p = (float*)calloc(2,sizeof(float));
      system("cls");
      cout<<setw(30)<<setfill(' ')<< ""<< "Shape: KITE"<< endl<< endl;
      cout<< "Enter its diagonal "<< endl;
      cout<< "Diagonal 1: ";
      cin>> p[0];
      cout<< "Diagonal 2: ";
      cin>> p[1];

      cout<< "Area = "<< a.Akite(p[0], p[1])<< " square units "<< endl;
      break;
    case 9:
      return 0;

    default:
      system("cls");
      cout<<setw(30)<<setfill(' ')<< "";
      cout<< "Invalid Entry\a"<< endl;
    }
    getch();
    system("cls");

  }
  return 0;
}
