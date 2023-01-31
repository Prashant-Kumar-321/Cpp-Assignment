// question
/* Define a class Complex to represent a complex Number. Declare instance member variables to store real
   and imaginary part of a complex number, also define instance member function to set values of complex
   number and print value of complex number;
 */

#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

double Abs(double a)
{
    if(a<0)
        a *= -1;
    return a;
}


// class complex
class Complex
{

    double real, img; //private instance variable

public:

    // setter function/////////////////////////////////////////////////////////////////////////////////////
    void setImgNumber()
    {
        cout<< "Enter complex Number : \n";
        cout<< "Real part : ";
        cin>> real;
        cout<< "Imaginary part : ";
        cin>> img;
    }
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////
    void getImgNumber()
    {
        char ope = (img<0) ? '-': '+';

        system("cls");
        cout<< "\n\n\n\t Z = " ;
        cout<<real << " "<< ope<< " i "<< Abs(img)<< setw(15)<< "where i = "<< char(251)<< -1<< endl;
    }

};

void printSquareroot(float a) // function to print square root symbol;
{
    cout<< "\t  ______"<<endl;
    cout<< "\t\\/ "<< a<< endl;
}

// Driver code
int main()
{
    Complex a;

    a.setImgNumber();
    a.getImgNumber();

    printSquareroot(45); // printing square root sign;


    getch();
    return  0;
}















