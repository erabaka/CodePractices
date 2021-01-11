
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
    sr x="I hate ",y="I love ",xx="I hate it",yy="I hate it";
    ll i,j,k,l;
    s(k);
    for(i=1;i<k;i++)
    {

         if(i&1==1){cout<<x<<"that ";continue;}


        else{cout<<y<<"that ";continue;}
    }
    k=k&1;
    //cout<<k<<endl;
    if(k==0){cout<<y<<"it";}
    else{cout<<x<<"it";}
    cout<<endl;
}
