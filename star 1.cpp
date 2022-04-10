#include<conio.h>
#include<iostream>
using namespace std;
main()
{int n,j ;
  cout<<"enter the number of line";
  cin>>n;
   int i;
 for(i=1;i<=n;i++)
  {   for(j=1;j<2*n;j++)
     {    if(i<=n/2)
       {if(j>0 && j<=n+1-i||j>=i+n-1 && j<2*n)
          {cout<<"*";}
       else
           {cout<<" ";}}
          else
          {

          if(j>0 && j<i+1 || j>=2*n-i && j<2*n )
         {cout<<"*";}
        else
           {cout<<" ";}}
     }
       cout<<"\n";


}}
