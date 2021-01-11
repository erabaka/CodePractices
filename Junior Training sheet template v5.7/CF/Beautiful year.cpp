
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
    ll n=0,m,l,k,i,j,x=0,y,z=0;
    sr xx;
    s(y);
    //cin>>xx;
    for(i=0;; i++)
    {
        y++;
        while(1)
        {
            if(y==0)
            {
                break;
            }
            z=y%10;
            xx[n++]=z;
            y=y/10;
        }
        for(ll v=0;v<n;v++)
    {cout<<xx[v]<<endl;}
        //cout<<n<<endl;


        for(j=0; j<n; j++)
        {
            for(k=j+1; k<n; k++)
            {
                if(xx[j]!=xx[k])
                {
                    x++;
                }
            }
        }
        if(x==12)
        {
            break;
        }
        else
        {
            x=0;
            continue;
        }
    }
    for(ll v=0;v<n;v++)
    {cout<<xx[v]<<endl;}n=0;x=0;
}
