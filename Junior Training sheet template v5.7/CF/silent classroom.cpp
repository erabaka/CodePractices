#include<bits/stdc++.h>
#include<cstring>
#include<vector>
using namespace std;
int main()
{
    vector<string>a,x;
    vector<int> b,c;
    string s;
    int m=0,n,z=0,p,t[10005],g=0,q=0,r=0,i=0,j,k1=0,k2=0,l=0,v=0,u;
    cin>>n;
    while(n--)
    {
        cin>>s;
        a.push_back(s);
        p=(int)(s[0]-97);
        t[p]++;}

for(u=0;u<26;u++)
{

        k1=t[u]/2;//cout<<k1<<endl;
        k2=t[u]-k1;//cout<<k2<<endl;
        l=((k1*(k1-1))/2)+((k2*(k2-1))/2);//cout<<l<<endl;

    v+=l;
    l=0;

}
cout<<v<<endl;
return 0;}
