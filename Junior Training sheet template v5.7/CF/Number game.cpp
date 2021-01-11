#include<bits/stdc++.h>
#define ll long long int
#define s(l) scanf("%lld",&l)

//ll x[200100];//,y[200100];
using namespace std;

int main()
{
    ll i,j,k,l=0,n,m;
    s(m);
    for(i=0; i<m; i++)
    {
        s(n);
//one:
       // n=n;

        if(n==1)
        {
            puts("FastestFinger");continue;
        }
        if(n==2)
        {
            puts("Ashishgup");continue;
        }
        if(n&1)
        {
            puts("Ashishgup");continue;
        }

        ll v,n2=0;//cout<<n<<endl;

        v=n;
        while(v%2==0)
        {
            v=v/2;//n1++;
        }


        if(v==1){puts("FastestFinger");}
        else if(n/v>=4)
        {
            puts("Ashishgup");
        }
        else{
                ll n1=0;
            for(j=3;j*j<=v;j+=2)
            {
                if(v%j==0)
                {
                    n1=1;
                    break;
                }
            }
            if(n1==1)
            {
                puts("Ashishgup");
            }
            else{puts("FastestFinger");}
        }



    }}
