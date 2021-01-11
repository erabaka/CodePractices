#include<bits/stdc++.h>
#define ll long long int
#define s(l) scanf("%lld",&l)
using namespace std;
int main()
{
    ll v=0,m,b=0,c=0,d=0,n,k,i,j,q=0;
    vector<ll>  aa,bb,cc;
    s(m);
    for(i=0; i<m; i++)
    {
        s(n);
        while(1){
            if(n==0)
            {
                break;
            }
        c++;
        b=n%10;
        n=n/10;
        aa.push_back(b);
    }
    d=c;
    ll a=0;
    for(j=0;j<c;j++)
    {
        v=ceil(aa[j]*pow(10,a));a++;
        cc.push_back(v);
    }



    //cout<<c<<endl;
    for(j=0; j<c; j++)
    {
        if(cc[j]==0)
        {
            d--;
            continue;
        }
        bb.push_back(cc[j]);
    }
    cout<<d<<endl;
    for(k=0; k<d; k++)
    {
        cout<<bb[k]<<" ";
    }
    cout<<endl;aa.clear();bb.clear();cc.clear();d=0;c=0;
}



}




