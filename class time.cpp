#include<conio.h>
#include<iostream>

using namespace std;
 class time
 {  private:
  int hr;
  int mi;
 int sec;
 public:
    void settime(int x,int y,int z)
 {
      hr=x;
  mi=y;
  sec=z;

 }
 void showtime()
 {
     cout<<hr<<":"<<mi<<":"<<sec<<":";
 }




 };
 main()
 { time b1,b2;
b1.settime(3,20,25);
 b1.showtime();

 }
