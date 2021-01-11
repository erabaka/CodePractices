#include<iostream>
using namespace std;

    long long int bigmod(long long int x,long long int y,long long int z)
    {
    long  long int a=1;

     while(y>0)
     {
         if(y%2!=0)
         {
             a=(a*x)%z;

         }


x=(x*x)%z;
y=y>>1;

    }return a;}
int main()
{
    long long int s,d,f;
    while(cin>>d>>s>>f)
    {

        cout<<bigmod(d,s,f)<<endl;

    }
}
