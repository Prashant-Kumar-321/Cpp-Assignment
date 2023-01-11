#include<iostream>
#include<conio.h>
#include<unistd.h>

using namespace std;

int main()
{
  while(true)
  {
   float l,w,h ; // Fundamental Parameter of cuboid
   float vol;

   cout<< "Volume of Cuboid \n";

   // Taking input of fundamental parameter of cuboid;
   cout<< "Length: ";
   cin>>l;
   cout<< "Width : ";
   cin>>w;
   cout<< "Height: ";
   cin>>h;

   vol = l*w*h ;
   cout<< "Volume of cuboid (L*W*H) = "<< vol << endl;
   getch();

   system("cls");
  }


  return 0;
}
