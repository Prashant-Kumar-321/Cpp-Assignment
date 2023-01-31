#include<iostream>
#include<conio.h>
#include<cmath>
#include<iomanip>
using namespace std;
class Rectangle
{
    float length, width;
    float Area, perimeter, diagonal; 

public:
    // Constructor
    Rectangle() {}
    Rectangle(float l, float w)
    {
        length = l;
        width = w;

        Area = l*w; 
        perimeter = 2 * ( l+w );
        diagonal = sqrt(length*length + width+width);  
    }

    // friend operator overloaded function
    friend istream& operator>> (istream&, Rectangle&);

    // Member function definition
    /*** they will be calculated  automatically at the  intialization or input time */
    // float area()
    // {
    //     return (length*width);
    // }
    // float Perimeter()
    // {
    //     return 2*(length + width);
    // }
    // float diagonal()
    // {
    //     return sqrt(length*length + width*width);
    // }

    // getter function of length and width
    float getLength()
    {
        return length;
    }
    float getWidth()
    {
        return width;
    }

    // getter function for each parameter 
    // of rectangel object; 
    float area()
    {
        return Area; 
    }

    float Permtr()
    {
        return perimeter; 
    }
    float Diag()
    {
        return diagonal; 
    }

    // Rectangle drawing fun
    void drawrect()
    {
       float x;

       if(modf(length,&x) >= 0.5) length++; // modf() seperates decimal number and return fraction part of it
       if( modf(width,&x) >= 0.5) width++;

        cout<< " "<<setw(int(length)*2)<< setfill('_')<< ""<< endl;
        for(int i=0; i<int(width); i++)
        {
            if(i==(int(width)-1))
                cout<< "|"<<setw(2*int(length)+1)<< setfill('_')<< "|"<<setfill(' ')<< endl;
            else
                cout<< "|"<<setw(2*int(length)+1)<<setfill(' ')<<right << "|"<<endl;
        }

    }

};

istream& operator>> (istream& is, Rectangle&r)
{
    cin>>r.length>>r.width;

    r.Area = r.length*r.width;
    r.perimeter = 2*(r.length + r.width);
    r.diagonal = sqrt(r.length*r.length+r.width+r.width);   

    return cin;
}


// Driver Code 
int main()
{
    Rectangle Rec1(4.5,3);
// taking input the parameter of rectangle
    cout<< "Enter length and width of Rectangle "<< endl;
    cin>> Rec1;

    cout<< "Rectangle of "<<Rec1.getLength()<< " by "<< Rec1.getWidth()<< endl;
    Rec1.drawrect();
    cout<< "\n";
    cout<< "Length = "<< Rec1.getLength()<< " , Width = "<< Rec1.getWidth()<< endl;
    cout<< "Area of Rectangle = "<<Rec1.area()<< " square units \n"<< endl;
    cout<< "Perimeter of Rectangle = "<< Rec1.Permtr()<< " units\n"<< endl;
    cout<< "Diagonal length of Rectangle = "<< Rec1.Diag()<< " units \n"<<  endl;

    Rectangle Rec2;
    cin>>Rec2;
    Rec2.drawrect();

    return 0;
}






















