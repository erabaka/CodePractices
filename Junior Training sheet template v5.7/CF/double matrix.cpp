

#include<bits/stdc++.h>

using namespace std;
int main()
{

    int a[100][100],b[100][100],c=0,d,m,n,x,y,z,k,l,i,j;
    cin>>x>>y;
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=y;j++)
        {
            cin>>a[i][j];
        }
    }

for(i=1;i<=x;i++)
    {
        for(j=1;j<=y;j++)
        {
            cin>>b[i][j];
        }
    }


for(i=1;i<=x;i++)
    {
        for(j=1;j<=y;j++)
        {
           if(a[i][j]>b[i][j])
           {
               swap(a[i][j],b[i][j]);
           }
        }
    }

    for(i=1;i<=x;i++)
    {
        for(j=1;j<=y;j++)
        {
            if(a[i][j]<=a[i-1][j] || a[i][j]<=a[i][j-1]){cout<<"Impossible";return 0;}
if(b[i][j]<=b[i-1][j] || b[i][j]<=b[i][j-1]){cout<<"Impossible";return 0;}
}
}
cout<<"Possible";
return 0;}
