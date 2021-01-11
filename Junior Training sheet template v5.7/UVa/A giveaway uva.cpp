#include<bits/stdc++.h>
#define ll long long
#define s(l) scanf("%lld",&l)

using namespace std;
int main()
{

    ll i,j,k=0,m,a,b,c,d;
    while(1)
    {
        s(m);
        if (m==0)
        {
            break;
        }
        a=sqrt(m);
        b=a*a;
        if(b==m)
        {
            k++;
        }
        c=cbrt(m);
        d=c*c*c;
        //cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
        if(d==m)
        {
            k++;
        }
        if(k==2)
        {
            printf("Special\n");
        }
        else
        {
printf("Ordinary\n");        }
        a=0;
        b=0;
        c=0;
        d=0;
        k=0;
    }
    return 0;

}
