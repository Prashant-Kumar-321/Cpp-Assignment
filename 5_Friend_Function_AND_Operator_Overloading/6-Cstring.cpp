#include<iostream>
#include<cstring>
using namespace std; 

class Cstring
{
  int size; 
  char*str; 

  public: 
      // copy constructor
      Cstring(const Cstring&s)
      {
        size = s.size; 
        str = new char[size+1]; 

        strcpy(str,s.str); 
      }

      // constructor
      Cstring(const char*s)
      {
        size = strlen(s); 
        str = new char[size+1]; 

        strcpy(str,s); 
      }

      Cstring() // default constructor 
      {
        size = 1; 
        str = new char[1]; 

        str[0] = '\0'; 
      }
      // destructor 
      ~Cstring()
      {
        delete []str; 
      }


      //Assignment opertor overloading 
      Cstring operator=(const Cstring&s)
      {
        if(this == &s)
             return *this; 

        delete []str; 
        size = s.size; 
        str = new char[size+1]; 

        strcpy(str, s.str);

        return *this; 
      }

      // '+' operator to catenate string 
      Cstring operator+(const Cstring&s)
      {
         Cstring temp; 

         temp.size = size+s.size;
         delete []temp.str; 

         temp.str = new char [temp.size+1]; 
         strcpy(temp.str,str); 
         strcat(temp.str,s.str); 

         return temp; 
      }
      // constant string catanation on Cstring object
      Cstring operator+(const char*s)
      {
        Cstring temp; 
        delete []temp.str; 

        temp.size = size+strlen(s); 

        temp.str = new char[temp.size+1]; 

        strcpy(temp.str,str); 
        strcat(temp.str,s); 

        return temp; 
      }

      // Comparision == operator overloading 
      bool operator== (const Cstring &s)
      {
        if(strcmp(s.str,str) == 0) // both string are same 
            return true; 
        else 
            return false; 
      }


      // Taking input string 
      friend istream& operator>> (istream&cin, Cstring&s)
      {
        char tem[200000]; 
        cin.getline(tem,200000); 

        delete []s.str; 

        s.size = strlen(tem); 
        s.str = new char[s.size+1]; 

        strcpy(s.str, tem); 

        return cin; 
      }
      // displaying the string 
      friend ostream& operator<< (ostream & cout, Cstring & s)
      {
        cout<< s.str; 
        return cout; 
      }

}; 

// Driver Code
int main()
{
  // DMA using constuctor to Cstring object
  Cstring *ptr = new Cstring("Everyone"); 
  cout<< *ptr<< endl; 

  delete ptr; // deallocating memory of object pointing ptr

  Cstring str1("Prashant "); 
  Cstring str2("Kumar"); 
  Cstring secondName = str2; // copy constructor will be called 

  cout<<"Strign 1 = "<< str1<< endl; 
  cout<< "string 2 = "<< str2<< endl; 
  cout<<"String 2 = "<< secondName<< endl; 

  Cstring FullName = str1+str2; 

  cout<< "Full name = "<< FullName<< endl;

  str1 = "ABC"; 
  str2 = "CDE"; 

  if(str1==str2) 
     cout<< "String are equal "<< endl;
  else 
    cout<< "Strings are not equal "<< endl;

  str1 = str1 + "CDE"; 
  cout<< "After catanation = "<< str1<< endl; 

  
  Cstring teach_Name; 
  cout<< "\nEnter your Teacher Name = "; 
  cin>>teach_Name; 

  cout<< "Teacher name = "<<teach_Name<< endl; 

  return 0; 
} 

