#include<bits/stdc++.h>
#define ll long long int
#define s(l) scanf("%lld",&l)
#define pb(x) push_back(x)
using namespace std;

//ll m,a,b;

int main()
{
    vector<ll>p,q;
    ll n,k;// cout<<m<<a<<b<<endl;
    s(n);
    for(ll i=0;i<n;i++)
    {
        ll v;
        s(v);
        ll m=0,a=0,b=0;
        for(ll j=1;j<=v*2;j++)
        {
            s(k);
            if(k%2==0)
            {
                p.pb(j);a++;
            }
            else{q.pb(j);b++;}
        }
        for(ll j=0;j<b-1;j+=2)
        {
            if(m==v-1){break;}
            else{
                cout<<q[j]<<" "<<q[j+1]<<"\n";m++;
            }
        }
        for(ll j=0;j<a-1;j+=2)
        {
            if(m==v-1){break;}
            else{
                cout<<p[j]<<" "<<p[j+1]<<"\n";m++;
            }
        }
        p.clear();
        q.clear();
    }
}
