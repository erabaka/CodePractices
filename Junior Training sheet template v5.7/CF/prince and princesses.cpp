#include<bits/stdc++.h>
using namespace std;
int main()
{
    int w,x,y,z=0,i,j,l,m,n,b=0,aa[10005];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>m;
        int a[m]={0};
        //set<int>yy;
        //set<int>xx;
        for(j=0;j<m;j++)
        {
            cin>>x;
            int k=0;
            for(y=0;y<x;y++)
            {
                 cin>>w;
                 if(a[w-1]==0&&k==0)
                 {
                     a[w-1]=1;
                     k=1;
                 }

            }
             if(k==0){b=j+1;}


        }
         for(j=0;j<m;j++)
         {
             if(a[j]==0){z=j+1;}}
             if(b!=0)
             {
                 cout<<"IMPROVE\n"<<b<<" "<<z<<endl;
             }
             else{cout<<"OPTIMAL"<<endl;}

b=0,z=0;

    }
}
