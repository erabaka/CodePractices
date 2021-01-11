#include<bits/stdc++.h>
#define ll long long int
#define s(l) scanf("%lld",&l)
//#define sc(p) scanf("%s",&p)

using namespace std;
int main()
{
    ll a,b,c,d,m,n,i,j=0,k,l;
    s(m);
    for(i=0;i<m;i++)
    {
        s(n);
        j=(pow(2,n/2)+pow(2,n/2))-2;
        printf("%lld\n",j);
    }
}
