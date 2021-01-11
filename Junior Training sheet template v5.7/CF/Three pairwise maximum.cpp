#include<bits/stdc++.h>
#define ll long long int
#define s(l) scanf("%l64d",&l)
#define ss(lc) scanf(" %c",&lc)

#define ppp push_back
#define p(x) printf("%l64d\n",x)
#define sr string
#define vr vector
using namespace std;
int main()
{
    ll x,y,z,n;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        cin>>x>>y>>z;
        ll x1,y1,z1;
        x1=max(x,max(y,z));
        y1=min(x,min(y,z));
        ll a=0,b=0,c=0;
        if(x==y){a=x;}
        if(y==z){c=y;}
        if(x==z){b=z;}
        if(a==x1||b==x1||c==x1){ cout<<"YES"<<"\n"<<x1<<" "<<y1<<" "<<"1"<<endl;}
            else{cout<<"NO"<<endl;}
    }
}
