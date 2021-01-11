#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int gh(char m, char n)
{
int t=abs(m-n);
    return min(t,26-t);
}
int main()
{
    int b,c,d,p=0,q,r,x=0,z,i,j,k[100005];
    string s,a;
    cin>>b;
    cin>>a;

    for(i=0;i<b-3;i++)
    {p=0;
    p=gh('A',a[i])+gh('C',a[i+1])+gh('T',a[i+2])+gh('G',a[i+3]);


k[i]=p;
    }

        sort(k,k+(b-3));
    //  for(i=0;i<b-3;i++)
   // {
     // cout<<k[i]<<" ";
   //}
        if(k[0]>52)
        {
            d=52-k[0];
            cout<<d<<endl;
        }
        else{d=k[0];
        cout<<d<<endl;}

    return 0;
}
