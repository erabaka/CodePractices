
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
    ll n,m,i,j,k,l;
    s(n);
    if(n%2==0)
    {
        n=ceil(n/2);

    }
    else{
        n=ceil(n/2);
        n=-n-1;

    }
    cout<<n<<endl;
}
