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
    char v;
    ll n,m=0,i,j=0,k,l;
    sr x;
    set<char>y;
    s(n);
    cin>>x;
    m=x.length();
    for(i=0;i<m;i++)
    {
        v=(tolower(x[i]));//cout<<x[i];
        y.insert(v);
    }
    j=y.size();//cout<<j;
    if(j==26){cout<<"YES"<<endl;}
    else{cout<<"NO"<<endl;}

}
