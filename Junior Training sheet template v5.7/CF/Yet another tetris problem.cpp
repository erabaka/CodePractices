#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define s(l) scanf("%lld",&l)
int main()
{
    ll t, n, a[99999],m,s,p=0,q;
    s(t);
    while(t--)
    {
        s(n);
        for(m=0; m<n; m++)
        {
            s(a[m]);
            a[m]=a[m]+1;//cout<<a[m];
            if(!(a[m]%2))
            {
                p++;

            }//cout<<p;

        }
        if(p==n||p==0)
        {
            printf("YES\n");

        }
        else
        {
            printf("NO\n");
        }
        p=0;

    }
}
