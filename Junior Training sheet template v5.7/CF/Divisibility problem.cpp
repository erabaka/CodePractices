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
    ll p,i,j=0,k,l=0,m,n=0;
    s(p);
    for(i=0;i<p;i++)
    {
        s(m);s(k);
        if(m%k!=0){
        n=(m/k)+1;
        l=n*k;
        j=l-m;}
        p(j);j=0;l=0;n=0;
    }
}
