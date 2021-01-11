#include<bits/stdc++.h>
#include<cstring>
#include<cmath>

using namespace std;
int main()
{
    int n,x,y,m=0,i,j,k=0;
    string s;
    cin>>n>>x>>y>>s;
   // m=pow(10,y);
   //m=n-x;
    //cout<<m<<endl;

    for(i=n-x;i<n;i++)
    {
         if(i==n-y-1&&s[i]=='0')
        {
            k++;
           // cout<<k<<endl;
        }


             else if(s[i]=='1'&& i!=n-y-1)
        { //s[i]='0';
       // cout<<s[i]<<" ";
            k++;
            //cout<<k<<endl;
        }

    }
cout<<k<<endl;

    return 0;
}
