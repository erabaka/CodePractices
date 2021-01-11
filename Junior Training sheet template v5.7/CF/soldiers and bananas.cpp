
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
    ll k,n,w,i,j=0,l=0,m;
    s(k);s(n);s(w); //cout<<k<<n<<w<<endl;
    for(i=0;i<w;i++)
    {
        j+=k;
        l+=j;//cout<<j<<endl;
    }
    m=(l-n);
    if(n>=l)
    {
        printf("0\n");
    }
    else{
    p(m);}
}
