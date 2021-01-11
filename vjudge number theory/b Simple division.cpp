#include<iostream>
#include<cmath>


using namespace std;
int gcd(int a, int b)
{
    if(b==0)
    {
         return a;
    }
    return (gcd(b,a%b));
}
 int main()
 {
     int a[1009],z=0,i,j;
     while(1)
     {cin>>a[0];
         if(a[0]==0)
         {
             break;
         }
         int x=1;
         while(1)
         {cin>>a[x];
             if(a[x]==0)
             {
                 break;
             }
             else{x++;}}
             int y=0;
             for(i=1;i<x;i++)
             {
                 z=a[i]-a[i-1];
                 y=gcd(y,z);
             }
             if(y<0){y*=-1;}
             cout<<y<<endl;

     }
     return 0;

 }
