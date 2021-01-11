#include<bits/stdc++.h>
#define ll long long int
#define s(l) scanf("%lld",&l)
#define ss(lc) scanf(" %c",&lc)

#define ppp push_back
#define p(x) printf("%lld\n",x)
#define sr string
#define vr vector
using namespace std;
//ll a[100002],b[100002],c[100002];
int main()
{
    char a[101],b[101],c[101];
    ll i,j,k=0,l,m,n;
    //memset(a,0,sizeof(a));
     //memset(b,0,sizeof(b));
      //memset(c,0,sizeof(c));
      gets(a);gets(b);
      k=strlen(a);
      for(i=0;i<k;i++)
      {
          if(a[i]!=b[i])
          {
              c[i]='1';
          }
          else{c[i]='0';}
          cout<<c[i];
      }
      //k=n^m;
      cout<<endl;

}
