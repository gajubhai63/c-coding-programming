#include<iostream>
#include<conio.h>
using namespace std;
int fact(int);
main()
{  int n,sum=0,s;
   cout<<"enter the number";
   cin>>n;
   while(n>0)
    {    s=n%10;
       sum=sum+fact(s);

     n=n/10;  }
     cout<<sum;
if(sum==n)
    {cout<<n<<" is  strong number";}

}
int fact(int n)
{
   if(n==1 || n==0)
        return (1);

   return(n*fact(n-1));
}
