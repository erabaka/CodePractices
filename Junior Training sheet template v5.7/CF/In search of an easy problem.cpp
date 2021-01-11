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
    string x="EASY",y="HARD";
    ll i,j=0,m,n;
    s(n);
    for(i=0;i<n;i++)
    {
        s(m);
        if(m==1){j=1;break;}
        else{j=0;}
    }
    if(j==1)
    {
        cout<<y<<endl;
    }
    else{cout<<x<<endl;}

}
