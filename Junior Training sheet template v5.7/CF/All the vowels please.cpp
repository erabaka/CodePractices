#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    int i,j=0,k,l,m,n,p=0,q;
    string s="aeiouaeiouaeiouaeiou";
    cin>>k;
    j=sqrt(k);
    if(k<25){cout<<-1<<endl;}
    else{
        for(i=5;i<=k;i++)
        {
            n=i;
            m=k/i;
            if(n*m==k){p=1;break;}
            if(m<5){p=0;break;}
        }
if(p==1){
   // cout<<m<<" "<<n<<" "<<p<<endl;
    for(i=0;i<n;i++)
    {
        for(l=0;l<m;l++)
        {
            cout<<s[(i%11)+(l%11)];
        }
    }}
    else{cout<<-1<<endl;}}
    return 0;
}
