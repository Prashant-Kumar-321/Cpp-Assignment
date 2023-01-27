#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

class STUDENT
{
 private:
   string name,fath_name,id_no,
   Address,eml_Address;
   int clss,age;

 public:
  // constructor
  STUDENT(string nme, int Class, int Age, string fath_nme, string id_NO, string emAdd, string Addr)
  {
    name = nme;
    fath_name = fath_nme;
    id_no = id_NO;
    Address = Addr;
    eml_Address = emAdd;
    clss = Class;
    age = Age;
  }
  STUDENT() {}; // default constructor

  void getDetail()
  {
    cout<< "Studetn detail : -"<<endl;
    cout<< "Name         : "<< name<< endl;
    cout<< "School ID No : "<< id_no<< endl;
    cout<< "Class        : "<< clss<< endl;
    cout<< "Age          : "<< age<< endl;
    cout<< "Father Name  : "<< fath_name<< endl;
    cout<< "Email Address: "<< eml_Address<< endl;
    cout<< "Address      : "<< Address<< endl;
  }
};

// function to take input
void Readetail(string (&a)[5], int &x, int &y)
{
  cout<< "Name       : ";
  getline(cin, a[0]);

  cout<< "School ID No: ";
  getline(cin, a[1]);

  cout<< "Class        : ";
  cin>> x;

  cout<< "Age          : ";
  cin>> y;

  fflush(stdin);
  cout<< "Father Name  : ";
  getline(cin, a[2]);

  cout<< "Email Address: ";
  getline(cin, a[3]);

  cout<< "Address      : ";
  getline(cin, a[4]);
}


// Driver code
int main()
{
  string a[5]; // to  temporarily store string detail of student
  int x,y;

  // taking student details input
  cout<< "Enter Student Detail:-"<< endl;
  Readetail(a,x,y);

  // Initializing an object of STUDENT class Dynamically;
  STUDENT *s = new STUDENT(a[0], x, y, a[2], a[1], a[3], a[4]);

  // displaying student detail
  cout<< endl;
  s -> getDetail();

  getch();
  return 0;
}

// Note : :

/********************************************************
  i cann't take string input including space with cin>>

 To take input into str_Array use these two  method
 1.cin.getline(arr,max_size);
 2. cin.get(arr,max_size).get();

*//*******************************************************/

/****************************************************************************
  cin.operator>>() It let '\n' stay in input buffer
*//**************************************************************************/
