
#include<bits/stdc++.h>
#define ll long long int
#define s(l) scanf("%lld",&l)
#define ss(lc) scanf(" %c",&lc)
//#include<unordered_set>
#define ppp push_back
#define p(x) printf("%lld\n",x)
#define sr string
#define vr vector
using namespace std;

int main()
{
    ll n,m,b,y,z,i,j;
     vr <ll>x;
    s(n);
    for(i=0;i<n;i++)
    {
        s(m);
        ll a[m+2];


        memset(a,0,sizeof(a));
        for(j=0;j<m*2;j++)
        {
            s(y);
            if(a[y]==0){
            a[y]=1;
            x.ppp(y);}
        }
        for(j=0;j<x.size();j++)
        {
            cout<<x[j]<<" ";
        }
        cout<<endl;x.clear();
    }
}
