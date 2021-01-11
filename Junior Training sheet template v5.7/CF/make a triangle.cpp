#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{

    int a,b,c,x,y,z,i,j,k,l,m=0,n;
    cin>>a>>b>>c;
    k=a+b+c;
    x=max(a,max(b,c));
   // cout<<x<<endl;
    y=min(a,min(b,c));
    //cout<<y<<endl;
    z=k-(x+y);
    n=y+z;
    //cout<<z<<endl;
    while(y+z<=x)
    {
        y++;
    }
    //cout<<y<<z<<endl;
    m=(y+z)-n;
    cout<<m<<endl;
    return 0;
}
