
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
    ll a[10001],b[10001],c[10001],k,kk=0,l,m,n,i,j;
    s(n);
    vr<ll> y;
    y.clear();
    memset(c,0,sizeof(c));

    for(i=0;i<n;i++)
    {
        s(k);s(m);
        for(j=0;j<k;j++)
        {
            s(a[j]);y.ppp(a[j]);
        }
        for(j=0;j<m;j++)
        {
            s(b[j]);y.ppp(b[j]);
        }
        for(j=0;j<k;j++)
        {
            for(l=0;l<m;l++)
            {
                if(b[l]==a[j]){c[kk++]=b[l];break;}
            }
        }
        if(kk>0)
        {
            cout<<"YES"<<endl;
            cout<<"1"<<" "<<c[0]<<endl;
        }
        else{cout<<"NO"<<endl;}kk=0;
    }
}
