#include<bits/stdc++.h>
#define ll long long int
#define s(l) scanf("%lld",&l)
#define ss(lc) scanf(" %c",&lc)

#define ppp push_back
#define p(x) printf("%lld\n",x)
#define sr string
#define vr vector
using namespace std;

int main()
{
    ll m=0, n=101;
    ll i,j=0,k,x,y,z=0,zz=0,ok=0,okk=0;
    s(x);
    for(i=1;i<=x;i++)
    {
        s(y);
        if(y>m){m=y;z=i;}
        if(y<=n){n=y;zz=i;}
    }

    ok=z-1;
    okk=x-zz;
    if(z<zz){j=ok+okk;}
    else{
    j=(ok+okk)-1;}
    //cout<<m<<n<<z<<zz<<ok<<okk;
    p(j);
    return 0;
}
