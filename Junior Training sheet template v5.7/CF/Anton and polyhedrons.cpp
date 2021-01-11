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
    sr xx,a="Tetrahedron",b="Cube",c="Octahedron",d="Dodecahedron",e="Icosahedron";
    ll n,m=0,i,j,k,l,aa=4,bb=6,cc=8,dd=12,ee=20;
    //map<sr,ll>x;
    /*x.insert({a,4});
    x.insert({b,6});
    x.insert({c,8});
    x.insert({d,12});
    x.insert({e,20});*/
    s(n);
    for(i=0;i<n;i++)
    {
        cin>>xx;
        if(xx==a){m+=aa;}
         if(xx==b){m+=bb;}
          if(xx==c){m+=cc;}
           if(xx==d){m+=dd;}
           if(xx==e){m+=ee;}
    }
    p(m);
}
