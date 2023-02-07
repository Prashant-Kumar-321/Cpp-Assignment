#include <iostream>
#include <conio.h>
#include <cstring>

using namespace std;
namespace string
{
  class Mystring
  {
    char str[100];

  public:
    Mystring() {}
    Mystring(const char *s)
    {
      strcpy(str, s);
    }
    // copy costructor
    /** **********************************************************
      Don't need this one because
      default copy constructor will copy values of arry1 to arry2
      that's what we need   
    ***************************************************************/
    Mystring(const Mystring &s) 
    {
      // strcpy(str, s.str); 
    }

    void takeStr()
    {
      cin.get(str, 100).get();
    }
    void getStr()
    {
      cout << str;
    }
    void changeStr(const char *s) //update string 
    {
      strcpy(str,s); 
    }
    // operator '!' overloading to reverse the case of Alphabet of string
    Mystring operator!()
    {
      for (int i = 0; str[i] != '\0'; i++)
      {
        // changing the case of string of Alphabet
        if (str[i] >= 65 && str[i] <= 90) // upper ---> lower
          str[i] += 32;

        else if (str[i] >= 97 && str[i] <= 122) // lower ---> upper
          str[i] -= 32;
      }
      return *this;
    }
    // conveting string into upper case
    Mystring operator+()
    {
      for (int i = 0; str[i] != '\0'; i++)
      {
        if (str[i] >= 97 && str[i] <= 122) // lower ---> upper
          str[i] -= 32;
      }
      return *this;
    }

    Mystring operator-()
    {
      for (int i = 0; str[i] != '\0'; i++)
      {
        // converting sting case into lower case
        if (str[i] >= 65 && str[i] <= 90) // upper ---> lower
          str[i] += 32;
      }
      return *this;
    }
  };
}

using string::Mystring; // using namespace declaration 

// Driver function
int main(void)
{
  Mystring string1("ApPLe");

  cout << "String : ";
  string1.getStr();
  cout << endl;

  // revesing the case of each Alphabet of string1 string
  // Toggle cases of string
  Mystring string2 = !string1;
  cout << "After reversing the case \nString : ";
  string1.getStr();
  cout << endl;
  
  string2.getStr(); cout<< endl; 
  string2.changeStr("Prashant"); 

  string1.getStr(); cout<< endl; 
  string2.getStr(); cout<< endl; 
  // // convert string's Alphabets into Upper case
  // cout << "String : Uppercase : ";
  // +string2;
  // string2.getStr();
  // cout << endl;

  // // converting into lower case
  // cout << "String : Lowercase : ";
  // -string2;
  // string2.getStr();
  // cout << endl;

  return 0;
}