#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1009],i,j,k,l,m,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>m;
        l=0;
        l=sqrt(m);
        for(j=1;j<=m;j++)
        {
            a[j]=j;
        }
        for(j=2;j<=l;j++)
        {
            for(k=2*j;k<=m;k=k+j)
            {
                a[k]=0;
            }
        }
        for(j=1;j<=m;j++)
        {
            if(a[j]!=0)
            {
                cout<<a[j]<<endl;
            }
        }

        cout<<endl;
    }
    return 0;
}
