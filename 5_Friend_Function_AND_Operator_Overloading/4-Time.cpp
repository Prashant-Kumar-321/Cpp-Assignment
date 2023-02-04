#include<iostream>
using namespace std; 

class Time 
{
    int hour{0}, minute{0}, second{0}; // private members of class 

    public: 
       Time(int h, int m, int s)
       {
        hour   = h; 
        minute = m; 
        second = s; 
       }
       Time() {}

       // friend function operator>> and opertor<<
       friend istream& operator>>(istream&, Time&); 
       friend ostream& operator<<(ostream&, Time t); 

       // function overloading using member function 
       bool operator==(Time); 
}; 

// definition of friend 
istream& operator>>(istream&cin, Time&t) // opertor>> taking input in Time object
{
  cout<< "Hour  : "; 
  cin>> t.hour; 
  cout<< "Minute: "; 
  cin>> t.minute; 
  cout<< "second: "; 
  cin>> t.second; 

  return cin; 
}

ostream& operator<< (ostream&cout, Time t)
{
  cout<< "Hour  : "<< t.hour<< endl; 
  cout<< "Minute: "<< t.minute<< endl; 
  cout<< "Second: "<< t.second<< endl; 

  return cout; 
}

bool Time::operator==(Time t)
{
  if(t.hour == hour && t.minute == minute&& t.second == second)
       return true;  // time are same 

  return false;  // time is unequal 
}

// driver function 
int main()
{   
    Time t1, t2;  // declaring two object of Time class wih default constructor
    cout<< "Enter first time : "<< endl; 
    cout<< "--------------------"<< endl; 
    cin>>t1;
    system("cls"); // clear console screen;  
    cout<< "first time \n"<< endl; 
    cout<< t1; 

    cout<< "Enter second time :"<< endl; 
    cout<< "--------------------"<< endl; 
    cin>> t2; 
    system("cls"); // clear console screen;
    cout<< "\nSecond Time \n"<< endl;  
    cout<< t2; 

    
    cin.get(); // so that at the end screen will wait for one input 
    cin.get(); 
    return 0; 
}