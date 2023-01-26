 #include<iostream>
 #include<conio.h>

 class date
 {
   int Yr, Dd, Mm;
 public:
  date(int y,int m,int d)
  {
    Yr = y;
    Mm = m;
    Dd = d;
  }
  date(){}

  friend void operator>> (std::istream&, date&);
  friend void operator<< (std::ostream&, date );

 };

 // friend function definition
 void operator>> (std::istream&is, date&d)
 {
   char ch;
   std::cin>>d.Yr>>ch>> d.Mm>> ch>> d.Dd; // 2022/3/12

 }

 void operator<< (std::ostream&os, date d)
  {
     std::cout<<d.Yr<<"/"<<d.Mm<< "/"<< d.Dd;
  }

  // driver code
  int main()
  {
    date d1(2006,9,16);
    // taking input from user
    std::cout<< "Enter date (yy/mm/dd) : ";
    std::cin>> d1;

    std::cout<< "DOB = "<< d1;

    return 0;
  }












