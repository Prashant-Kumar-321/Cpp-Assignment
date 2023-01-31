// question
/*
Define a class Time to represent Time (like 3hr 45min 20sec). Declare appropriate
number of instance member variables and also define instance member functions to
set values for time and display values of time
*/
 #include<iostream>
 #include<conio.h>
 using namespace std;

 class Time
 {
   int h,m,s; // private instance member variables

  public:
   Time(int H = 0, int M = 0, int S= 0)
   {
     this->h = H;
     this->m = M;
     this->s = S;
   }
   Time()
   {
    h = 0; 
    m = 0; 
    s = 0; 
   }

  ///////////////////////// Instance member functions
  void setTime()
  {
    char ch;
    cin>> h>> ch>> m>> ch>> s; // to take input in HH:MM:SS formate ;
  }
  // setter function of individual part of time
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
    cout<< h<< "::"<<m<< "::"<< s<< endl;
  }

 };

 void TimeInput(Time &x) // for an object of Time class
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
   cout<< "Enter Time in HH:MM:SS formate * ! \n";
   TimeInput(t1);
    t1.setTime();

    t1.getTime();

    getch(); 
    return 0; 
 }
