#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,i,j,k,l,m,n,p=0,q=0,r=0,s=0,v;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        int y[500]={0};
        for(j=0;j<a;j++)
        {
            cin>>k;
            y[k]=1;//cout<<y[k]<<k<<endl;
        }
        for(l=1;l<500;l++)
        {
            //cout<<y[l]<<" ";
            if(y[l]==0)
            {
                b--;// cout<<b<<endl;
                if(b==-1)
                {
                    cout<<l-1<<endl;break;
                }
            }
        }


    }
}
