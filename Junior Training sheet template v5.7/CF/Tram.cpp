
#include<bits/stdc++.h>
#define ll long long int
#define s(l) scanf("%lld",&l)
#define p(l) printf("%lld",l)
using namespace std;
ll a[200000],b[200000];
int main()
{
ll c,d,i,j,k,m=0,n,l=0;
s(n);
for(i=0;i<n;i++)
{
s(a[i]);s(b[i]);
}
for(i=0;i<n;i++)
{
    l=l+b[i]-a[i];
        //b[i+1]=l;
        if(l>=m)
        {m=l;}
}
    p(m);
    m=0;l=0;
}

