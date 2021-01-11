#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    int n,i,l,m=0,k=0;
    string s,v;
    cin>>n>>s;
    for(i=0;i<n-1;)
    {
        if(s[i]==s[i+1])
        {
            i++;}
            else{
                v+=s[i];
                v+=s[i+1];
                i+=2;

            }
    }
    cout<<n-v.size()<<endl<<v;

}
