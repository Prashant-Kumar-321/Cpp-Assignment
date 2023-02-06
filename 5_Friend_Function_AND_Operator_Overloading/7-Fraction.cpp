#include<iostream>
#include<conio.h>
using namespace std; 

class Fraction 
{
   int Numerator; 
   int Denomenator; 
   void Normalize_Fraction(); 

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

      // overloading unary++
      // pre increment 
      Fraction operator++(); 
      // post
      Fraction operator++(int); 
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

      out<< f.Numerator<< '/'<< f.Denomenator; 
    
    }
    catch(int zero) // handler block of try; 
    {
      // log-file("f.denomerator == 0"); 
      cout<< "Not defined "; 
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

  // Driver fucntion 
  int main()
  {
    Fraction f1 (1,-3); 
    Fraction f2 (9,0); 

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

    return 0; 
  }


