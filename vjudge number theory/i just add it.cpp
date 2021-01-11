
#include<iostream>
#define mods 10000007
using namespace std;

long long int modexp(long long int x, long long int y)
{
    long long int a=1;
    while(y>0)
    {
        if(y%2!=0)
{
            a=(a*x)%mods;}

        x=(x*x)%mods;
        y=y>>1;
    }
    return a;
}
 int main()
 {
     long long int n,k,b=0,a,s,d,f;
     while(1)
     {
         cin>>n>>k;
         if(n==0&&k==0)
     {
         return 0;
     }

    a= (2*modexp(n-1,n-1))%mods;
     s=(2*modexp(n-1,k))%mods;
     d=modexp(n,n)%mods;
     f=modexp(n,k)%mods;
      b=(a+s+d+f)%mods;
cout<<b<<endl;
 }
return 0;}
