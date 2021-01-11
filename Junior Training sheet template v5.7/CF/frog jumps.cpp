#include<bits/stdc++.h>
#define ll long long int
#define s(l) scanf("%lld",&l)
//#define sc(p) scanf("%s",&p)

using namespace std;
int main()
{
    vector<ll> aa;
    ll a=0,b=0,c=0,d=0,m,n,i,j,l,p,q,k;
    string ss;
    set<ll>r,rr;
    set<ll> :: iterator v;
        s(n);
    for(i=0;i<n;i++)
    {
        cin>>ss;
        q=ss.length();

        for(j=0;j<q;j++)
        {
            if(ss[j]=='L')
            {
              d++;
            }
            else{d=0;}
            if(c<d){c=d;}
        }
        printf("%lld\n",c+1);c=0;d=0;
        //highest LLL... er combi er len+1 is the sol.
        /*r.clear();
        for(j=0;j<q;j++)
        {
            if(ss[j]=='L')
            {
                r.insert(j);
            }
        }
        a=r.size();aa.clear();
        for(v=r.begin();v!=r.end();v++)
        {
          aa.push_back(*v);
        }
        rr.clear();
        for(k=0;k<a-1;k++)
        {
            if(abs(aa[k]-aa[k+1])==1)
            {
                rr.insert(aa[k]);
                rr.insert(aa[k+1]);
            }
        }
        b=rr.size();
        c=a-b;
        if(c==0)
        {
            c=b;
        }
        printf("%lld\n",c+1);c=0;a=0;b=0;*/
    }
}
