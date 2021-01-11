#include<bits/stdc++.h>
#define ll long long int
#define s(l) scanf("%lld",&l)
using namespace std;
int main()
{
ll a,b,c,d,m,n,k,l,x,y,p,q;
vector<ll>xx,yy;
s(n);
for(p=0;p<n;p++)
{
    s(m);
    for(q=0;q<m;q++)
    {
        s(c);
        xx.push_back(c);
    }
    for(q=0;q<m;q++)
    {
        if(q%2==0&&xx[q]>0)
        {
            xx[q]=-xx[q];
        }
        if(q%2!=0&&xx[q]<0)
            {
            xx[q]=-xx[q];
        }
        cout<<xx[q]<<" ";
    }


cout<<endl;xx.clear();yy.clear();}

}
