#include<bits/stdc++.h>
#define ll long long int
#define s(l) scanf("%lld",&l)
#define ss(lc) scanf(" %c",&lc)

#define ppp push_back
#define p(x) printf("%lld\n",x)
#define sr string
#define vr vector
using namespace std;
int main()
{
    ll a=0,b=0,c=0,n,m,k,i,j;
    sr ss;
    s(n);s(m);
    cin>>ss;
    jala:

    while(m--)
        {

    for(i=0;i<ss.length();i++)
    {
        if(ss[i]=='B'&&ss[i+1]=='G')
        {
            ss[i]='G';ss[i+1]='B';i++;
        }
    }
        }
        for(i=0;i<ss.length();i++)
        {
            cout<<ss[i];
        }
        cout<<endl;
}
