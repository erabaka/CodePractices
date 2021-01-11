#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,m=0,n=1,i,k;
    cin>>a;
    string b;
    cin>>b;
    k=b.length();
  for(i=0;i<k;i++)
  {

      if(b[i]=='-')
      {
          m--;                             ///FALTU///
          if(m<0)
          {
              m=0;
          }
      }
      else{m++;}}

      cout<<m<<endl;
    return 0;
}
