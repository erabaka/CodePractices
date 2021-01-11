

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
//ll a;1

ll a[2001]; string b[2001];ll w;
map<string, ll> x,y;
//map<string ,ll>::iterator v;
int main()
{
    ll n,m=0;
    cin>>n;
    for(ll i=0;i<n;i++)
    {

        cin>>b[i]>>a[i];
        x[b[i]]+=a[i];
       // y[b[i]]=a[i];
    }
    for(ll k=0;k<n;k++)
    {
        //cout<<b[k]<< " "<<x[b[k]]<<endl;
      //  cout<<a[k]<<endl;
        m=max(m,x[b[k]]); //cout<<m<<endl;
    }
    //cout<<m<<endl;
    for(ll j=0;j<n;j++)
    {
        y[b[j]]+=a[j];
        if(x[b[j]]==m&&y[b[j]]>=m)
        {
            //cout<<y[b[j]]<<endl;

            w=j;
            break;
        }
    }
    cout<<b[w]<<"\n";
}
