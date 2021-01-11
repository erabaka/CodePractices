#include<bits/stdc++.h>
#define ll long long int
#define s(l) scanf("%lld",&l)
using namespace std;
int main()
{
    ll v,a,b,x,yy,w,xx,y,c,d,m,n,l,k;
    s(l);
    for(k=0;k<l;k++)
    {
        s(a);s(b);
        x=max(a,b);
        y=min(a,b);
        yy=y+y;
        xx=abs(x-yy);
        m=min(x,yy);
        n=m+xx;
        v=n*n;
        printf("%lld\n",v);}

}
