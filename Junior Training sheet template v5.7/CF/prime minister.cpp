
#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;
int main()
{
    int a[1009],b[1009],n,s=0,r=0,i=0,j,k=0,l=0,m=0;
    cin>>n>>a[0];
    for(i=1;i<n;i++)
    {
        cin>>a[i];
        s+=a[i];
    }
    m=s/2;r=a[0];b[++k]=1;
    //sort(a+1,a+n);
    for(i=1;i<n;i++)
    {
    if(2*a[i]<a[0])
    {

        r+=a[i];
        b[++k]=i+1;
    }}
    if(2*r<=s)
    {
        cout<<0,0;
    }
    else{ cout<<k<<endl;
        for(i=1;i<=k;i++)
        {
            cout<<b[i]<<" ";
        }
    }
}

