#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    string a,b;
    ll i,x,j,k,l,m=0,n;
    while(cin>>a)
    {
        cin>>b;
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        ll aa[10005];
        memset(aa,0,sizeof(aa));
       // vector<ll>::iterator x;
        //aa.clear();
        for(i=0;i<a.length();i++)
        {
            for(j=0;j<b.length();j++)
            {
                aa[i+j]+= ((a[i]-'0')*(b[j]-'0'));
            }
        }
        /*for(i=0;i<aa.size();i++)
        {
            cout<<aa[i]<<" ";
        }*/
        for(i=0;i<10005-1;i++)
        {
            aa[i+1]+=aa[i]/10;
            aa[i]%=10;
        }
        x=10005-1;
        while(x>0&&aa[x]==0)
        {
            x--;
            m=x;
        }

        //cout<<m<<endl;
        //reverse(aa,aa+m);
        for(x=m;x>=0;x--)
        {
            cout<<aa[x];
        }

        cout<<endl;
m=0;
    }
}
