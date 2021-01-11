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
    ll a[10000],b[10000],i,j=0,k,l,m,n;
    memset(a,0,sizeof(a));
    s(n);
    for(i=1;i<=n;i++)
    {
        s(m);
        a[m]=i;
    }
    for(i=1;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
