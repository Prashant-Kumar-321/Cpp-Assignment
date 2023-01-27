#include<iostream>
using namespace std;

int main()
{
  int n1,n2,n3;
  cout<< "Enter three numbers : ";
  cin>>n1 >>n2 >>n3 ;

  float Avg = (n1+n2+n3)/3.0;

  cout<<endl<< "Avg("<<n1<<" "<<n2 <<" "<< n3<< ") = "<< Avg ;

  return 0;
}
