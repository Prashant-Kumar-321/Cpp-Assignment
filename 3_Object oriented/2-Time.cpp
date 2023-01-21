 #include<iostream>
 #include<conio.h>

 using namespace std;

 class Time
 {
   int h,m,s; // private instance member variables

 public:
  Time(int H = 0, int M = 0, int S= 0)
  {
    h = H;
    m = M;
    s = S;
  }

  ///////////////////////// Instance member functions
  void setTime()
  {
    cout<< "Enter Time "<< endl;
    cout<< "Hour: ";
    cin>> h;

    cout<< "Minute: ";
    cin>> m;

    cout<< "second ";
    cin>> s;
  }
  // setter time
  void setM(int a)
  {
    if(a<0)
      m = 0;
    else if(a>60)
      m = 60;
    else
      m = a;
  }

  void setH(int a)
  {
    if(a<0)
      h = 0;
    else if(a>24)
      h = 24;
    else
      h = a;
  }

  void setS(int a)
  {
    if(a<0)
      s = 0;
    else if(a>60)
      s = 60;
    else
      s = a;
  }

  void getTime()
  {
    cout<< "\nTime ::\n";
    cout<<h << " hr "<< m << " min "<< s << " sec "<< endl;
  }

 };

 void TimeInput(Time&x) // for an object of Time class
 {
   int temp;
   cout<< "Enter Time : \n";
   cout<< "Hour : ";
   cin>> temp;
   x.setH(temp);

   cout<< "Minute : ";
   cin>> temp;
   x.setM(temp);

   cout<< "second : ";
   cin>> temp;
   x.setS(temp);
 }

 int main()
 {
   int temp;

   Time t1(2,30,45); // creating an object of time class

   /*// taking input form user ;
   cout<< "Enter Time : \n";
   cout<< "Hour: ";
   cin>> temp;
   t1.setH(temp);

   cout<< "Minute: ";
   cin>> temp;
   t1.setM(temp);

   cout<< "Second : ";
   cin>> temp;
   t1.setS(temp);
  */

   // taking input form user
    TimeInput(t1);

    t1.getTime();
 }
