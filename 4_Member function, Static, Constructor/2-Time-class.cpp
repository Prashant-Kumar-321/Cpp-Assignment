#include<iostream>
#include<conio.h>

using namespace std;
class Time
{
  int hour, minute, second;

public:
  Time(int h,int m, int s) // normalization has been done with constructor and setTime function
  {
    // hour initialization
    if(h<0) hour = 0;
    else    hour = h;

    // minute Initialization
    if(m<0) minute = 0;
    else if(m>=60)
    {
      minute = m%60;
      hour += m/60;
    }
    else minute = m;

    // second initialization
    if(s<0) second = 0;
    else if(s>=60)
    {
      second = s%60;
      minute += s/60;
      if(minute >= 60)
      {
        minute %= 60;
        hour += minute/60;
      }
    }
    else second = s;
  }
  Time() {} // default constructor;

  // member function declaration ;
  void showTime()
  {
    cout<<hour<< "h :: "<< minute<< "m :: "<< second<< "s";
  }

  void setTime(int h, int m, int s);

  Time add (Time ); // add two time;
  Time sub (Time);  // subtrct two time;

};

void Time::setTime(int h, int m, int s)// normalization has been done with setTime function
{
    // hour initialization
    if(h<0) hour = 0;
    else    hour = h;

    // minute Initialization
    if(m<0) minute = 0;
    else if(m>=60)
    {
      minute = m%60;
      hour += m/60;
    }
    else minute = m;

    // second initialization
    if(s<0) second = 0;
    else if(s>=60)
    {
      second = s%60;
      minute += s/60;
      if(minute >= 60)
      {
        minute %= 60;
        hour += minute/60;
      }
    }
    else second = s;
}

Time Time::add(Time t) // Adding two time
{
  int s = second + t.second;
  int m = minute + t.minute + s/60;

  t.hour = t.hour + hour + m/60;
  t.minute = m%60;
  t.second = s%60;

  return t;
}

Time Time::sub(Time t)
{
 Time tem (hour,minute,second);

 // making t2 subtractable form t1
 if(tem.second < t.second)
 {
   tem.second += 60;
   tem.minute--;
   if(tem.minute < t.minute)
   {
     tem.minute += 60;
     tem.hour--;
   }
 }
 else if (tem.minute < t.minute)
 {
   tem.minute += 60;
   tem.hour--;
 }

 // subtracting t2 from t1;

 tem.hour -= t.hour;
 tem.minute -= t.minute;
 tem.second -= t.second;

 return tem;
}

// Driver code
int main()
{
  int h,m,s; //h = hour, m = minute, s = second;

  Time t1(1,45,56), t2 = Time(3,47,51); // initializing two time

  // Taking input from user
  cout<< "Enter Start time (h m s) : ";
  cin>> h>> m >> s;
  t1.setTime(h,m,s);

  cout<< "Enter Storp time (h m s) : ";
  cin>> h>> m >> s;
  t2.setTime(h,m,s);

  system("cls");
  // display time
  cout<< "Start Time : ";
  t1.showTime();
  cout<< endl ;

  cout<< "Stop Time  : ";
  t2.showTime(); cout<< endl;

  Time t3  = t1.add(t2); // t1+t2;
  cout<< endl<< "t1 + t2 = ";
  t3.showTime();cout<< endl;

  t3 = t2.sub(t1); // ft2 - t2
  cout<< endl<< "t2 - t1 = ";
  t3.showTime(); cout<<endl;

  return 0;
}


















