#include<bits/stdc++.h>
#define ll long long int
#define s(l) scanf("%lld",&l)
#define p(l) printf("%lld\n",l)
using namespace std;
ll a[200000],b[200000];
int main()
{
    ll c,d,n,k,l=0,i,j;
    s(n);
    for(i=5;i>0;i--)
{
    l+=n/i;
        n=n%i;
}
    p(l);
}
