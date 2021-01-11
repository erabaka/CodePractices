#include<bits/stdc++.h>
#define ll long long int
#define s(l) scanf("%l64d",&l)
#define p(l) printf("%l64d\n",l)
using namespace std;
ll a[200000],b[200000];
int main()
{
    string s;
    ll i,j,k,m,n=0;
    cin>>s;
    m=s.length();
    for(i=0;i<m;i++)
    {
        if(s[i]=='4'||s[i]=='7')
        {n++;}
    }
    if(n==4||n==7)
    {
    cout<<"YES"<<"\n";
}
    else{cout<<"NO"<<"\n";}
}
