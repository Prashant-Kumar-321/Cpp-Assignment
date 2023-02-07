#include<iostream>
#include<conio.h>
using namespace std; 


//Global functin finding lcm of two number 
int lcm(int a, int b)
{
  int max = (a>b) ? a: b; 
  int i; 
  for(i = max; i <= (a*b); i++)
  {
    if(max%a == 0 && max%b == 0)
        return i; 
  }

  return a*b; // for sake of statisfaction of compiler that i am return some non-void value
}
 
 //class 
class Fraction 
{
   int Numerator; 
   int Denomenator; 
   void Normalize_Fraction(); 
   int  hcf();                // finding hcf of numer and denom  

   public:
     // Constructor 
      Fraction()
      {
        Numerator   = 0;  // overall fraction = 0 
        Denomenator = 1; 
      }
      Fraction (int numer, int deno)
      {
        Numerator   = numer; 
        Denomenator = deno; 

        this->Normalize_Fraction(); // Normalizing fraction 
      }

      // Destructor 
      ~Fraction () { } // option 

      // Copy Constructor
      Fraction (const Fraction&f) // since shallow copy will be enough this is (optional)
      {
        // shallow copy 
        Numerator   = f.Numerator; 
        Denomenator = f.Denomenator; 
      }

      // friend function declaration ---> friend function are non-member function 
      friend istream& operator>> (istream&, Fraction&); 
      friend ostream& operator<< (ostream&, const Fraction&); 
      // fraction simplyfying 
      Fraction simplify(); 
      void update(int, int);  // updating the value of fracation 
  
      // overloading unary++
      // pre increment 
      Fraction operator++(); 
      // post
      Fraction operator++(int); 

      // Arithmetic operation 
      Fraction operator+ (Fraction f); // Addition 
      Fraction operator- (Fraction f);  // substraction 
      Fraction operator* (Fraction f);  // multiplication 
      Fraction operator/ (Fraction f); // Division 
}; 

  // definition of friend function 
  istream& operator>>(istream &in, Fraction &f)
  {
    cout<< "Numerator  : "; 
    in>> f.Numerator; 
    cout<< "Denomenator : "; 
    in>> f.Denomenator;
     
    f.Normalize_Fraction(); 
    return in; 
  }

  ostream& operator<< (ostream&out, const Fraction &f)
  {
   //  Exception when f.Denomenator == 0; 
    try
    {
      if(f.Denomenator == 0)
          throw f.Denomenator; 

      if(f.Numerator == 0)
          throw '0'; 
      if(f.Numerator == 1 && f.Denomenator == 1)
          throw "1"; 

      out<< f.Numerator<< '/'<< f.Denomenator; 
    }
    catch(int zero) // handler block of try; 
    {
      // log-file("f.denomerator == 0"); 
      cout<< "Not defined "; 
      return out; 
    }
    catch(char numer_zero)
    {
      cout<< 0 ; 
      return cout; 
    }
    catch(const char*s)
    {
      cout<< 1; 
      return out; 
    }

    return out; 
  }
 
  // definition of member function of Fraction class 
  // overloading unary ++  
  Fraction Fraction::operator++(int) // post ++ 
  {
    Fraction temp = (*this); // temporarily storing invoked object 
    
    try
    {
      if(Denomenator == 0) // Not defined fraction 
        throw 0;            // so don't increment its value 

    Numerator++; 
    Denomenator++; 
    }
    catch(int zero)
    {
      return (*this); 
    }


    return temp; 
  }

  Fraction Fraction::operator++() // pre ++ 
  {
    try // try block 
    {
      if(Denomenator == 0)  // Not defined fraction 
        throw 0;            // so don't increment it's value 

      Numerator++; 
      Denomenator++; 
    }
    catch(int zero)
    {
      // logfile("deno = 0 : not defined fraction "); 
      return (*this); 
    }

    return (*this); 
  }
  
  void  Fraction::Normalize_Fraction() // Normalizing fraction 
  {
    // if Denomenator is negative
    // MUltiple both numera and denomenator by -1 
    if(Denomenator < 0) 
    {
      Numerator   *= -1; 
      Denomenator *= -1; 
    }
  }
  
  // update fraction
  void Fraction::update(int numer, int deno)
  {
    Numerator  = numer; 
    Denomenator = deno; 

    this[0].Normalize_Fraction();  
  }
  // finding hcf of numerator and denomenator to simplify it; 
  int Fraction::hcf()
  {
    int min = (abs(Numerator) < abs(Denomenator)) ?abs(Numerator): abs(Denomenator); // finding max among numer and deno magnitude wise
    int i; 
    // finding hcf of numer and deno
    for(i=min; i>0; i--)
    {
      if(Numerator%i == 0 && Denomenator%i == 0)
          return i; 
    }
    return 1; // for sake of statisfaction for the compiler 
  }

  // simplify fraction definition
  Fraction Fraction::simplify()
  {
     int Hcf = this->hcf();

     Numerator   /= Hcf; 
     Denomenator /= Hcf;

      return *this;  
  }

  // Arithmetic operation member function 
  // 1. addition 
  Fraction Fraction::operator+(Fraction f)
  {
    Fraction add;
    try 
    {

    if(Denomenator == 0 || f.Denomenator == 0)
          throw 0; 

    int Lcm = lcm(Denomenator, f.Denomenator); 

    add.Denomenator = Lcm; 
    add.Numerator = (Numerator * (Lcm/Denomenator) ) + (f.Numerator * (Lcm/f.Denomenator)) ; 
 
    add.simplify(); // fucntion call simplefying add fraction
    }
    catch(int deno_zero)
    {
      add.Denomenator = 0 ; 
      add.Numerator = 0; 
    }
    return add; 
  }

  // 2.substraction 
  Fraction Fraction::operator-(Fraction f)
  {
    Fraction sub;
    try 
    {

    if(Denomenator == 0 || f.Denomenator == 0)
          throw 0; 

    int Lcm = lcm(Denomenator, f.Denomenator); 

    sub.Denomenator = Lcm; 
    sub.Numerator = (Numerator * (Lcm/Denomenator) ) - (f.Numerator * (Lcm/f.Denomenator)) ; 
 
    sub.simplify(); // fucntion call simplefying add fraction
    }
    catch(int deno_zero) // handler 
    {
      sub.Denomenator = 0 ; 
      sub.Numerator = 0; 
    }

    return sub; 
  }
  

  // 3.Multiplication 
  Fraction Fraction::operator*(Fraction f)
  {
    Fraction multi;
    try 
    {

    if(Denomenator == 0 || f.Denomenator == 0)
          throw 0; 

    multi.Denomenator = Denomenator*f.Denomenator;  
    multi.Numerator   = Numerator  * f.Numerator; 
 
    multi.simplify(); // fucntion call simplefying add fraction
    }
    catch(int deno_zero) // handler 
    {
      multi.Denomenator = 0 ; 
      multi.Numerator = 0; 
    }

    return multi; 
  }
  // 4. Division 
   Fraction Fraction::operator/(Fraction f)
  {
    Fraction Div = f;

    // swap(Div.numer, Div.deno)
    int tem = Div.Denomenator; 
    Div.Denomenator = Div.Numerator; 
    Div.Numerator = tem; 

    return Div = (*this) * Div;

  }



  // Driver fucntion 
  int main()
  {
    Fraction f1 (1,-3); 
    Fraction f2 (9,0);
    
   /*
    // printing the value of f1 and f2; 
    cout<<"f1 = "<< f1<< endl; 
    f2++; // increment will not be perfomed since deno = 0 
    ++f2; 
    cout<<"f2 = "<< f2<< endl<<endl; 

    // taking input in my Fraction object 
    Fraction f3, f4; 

    cout<< "Enter first fraction value : "<< endl;
    cin>> f3;

    f3++; 
    cout<<"f3++ : "<< f3<< endl; 
    ++f3;  
    cout<< "++f3 : "<< f3<< endl; 

    cout<<" Enter second fraction value :"<< endl;   
    cin>> f4;

    Fraction f5 = ++f4; 
    cout<< "f5 = ++f4" << endl;
    cout<< "f5   : "<< f5<< endl; 
    cout<< "++f4 : "<< f4<< endl<< endl; 

    _getch(); 
    f5 = f4++; 
    cout<< "f5   = f4++ "<< endl; 
    cout<< "f5   = "<< f5<< endl; 
    cout<< "f4++ = "<< f4<< endl;  
     */

     f1.update(1,4); 
     f2.update(2,3); 

     cout<< endl << endl; 

     cout<< "F1 = "<< f1<< endl; 
     cout<< "F2 = "<< f2<< endl; 

     Fraction sum = f1+f2; 
     sum = f1-f2;

     Fraction product = f1*f2;   
     Fraction div = f1/f2; 

     cout<< "F1 + F2 = "<< sum<< endl; 
     cout<< "F1 X F2 = "<< product<< endl; 
     cout<< "F1/F2 = "<< div<< endl; 

    return 0; 
  }


