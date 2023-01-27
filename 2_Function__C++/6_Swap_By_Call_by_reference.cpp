#include<iostream>
using namespace std;
class SwapInt
{
public:
  int a;
  void Swap(int&p, int&q)
  {
    p += q;
    q = p-q;
    p -= q;
  }

};

  void Swap(int&p, int&q)
  {
    p += q;
    q = p-q;
    p -= q;
  }

int main(void)
{

  int x = 10;
  int&p = x; // int&p ---> is reference variable
  int&q = x;
  // x ---> p(nickname of x) ---> q(nickname of x)

  cout<< "x = "<< p<< endl ;
  cout<< "x = "<< q<< endl ;

  cout<< "&p = "<< &p<< endl ; // &p == &x, It means reference variable p is alternative name of
  cout<< "&x = "<< &x<< endl ; // variable x

  p++; x++;
  x -= 2;
  cout<< "x = "<< x<< endl << endl ;


  int y = 20;
  p = y; // x = y;
  cout<< "y = "<< p<< endl ;// cout<<x;
  cout<< "y = "<< y<< endl ;

  cout<< "&p , &x = "<< &p<< endl ; // &p == &y, It means reference variable p is alternative name of
  cout<< "&y = "<< &y<< endl ; // variable y

  p++;
  y++;
  cout<< "p,x = "<< p<< endl ; // expected 22;
  cout<< "y = "<< y<< endl<< "\n\n" ; // expected 22;



  int a, b;
  cout<< "Enter two Numbers ";
  cin>>a >>b;

  cout<< "Before swapping \n";
  cout<< "a = "<< a<< ", b = "<< b << endl<<endl;

 //SwapInt a;--> Error: Conflicting declaration "swapInt a"
  Swap(a,b);

  cout<< "After Swapping \n";
  cout<< "a = "<< a<< ", b = "<< b<< endl;


  return 0;
}
