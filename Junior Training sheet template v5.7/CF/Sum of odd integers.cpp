#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,d,l,m,n,k,p,q,r,s,i,j,w,x,y,z;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>p>>q;
        if(p%2==0)
        {
            if(q%2==0&&q*q<=p)
            {
                cout<<"YES"<<endl;
            }
            else{cout<<"NO"<<endl;}
        }
        if(p%2!=0)
        {
            if(q%2!=0&&q*q<=p)
            {
                cout<<"YES"<<endl;
            }
            else{cout<<"NO"<<endl;}
        }
    }
}
