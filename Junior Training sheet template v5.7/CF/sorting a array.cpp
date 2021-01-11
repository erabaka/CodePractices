#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a[10009],b[10009],x,y,z,m,n,i,j,r=0,l=0;

  cin>>x;
  for(i=0;i<x;i++)
  {
      cin>>a[i];
      b[i]=a[i];
  }
  sort(b,b+x);
  for(i=0;i<x;i++)
  {
      if(a[i]!=b[i])
      {
          l=i;break;
      }
  }
  for(i=x-1;i>=0;i--)
  {
      if(a[i]!=b[i])
      {
          r=i;break;
      }
  }

    reverse(a+l,a+r+1);
    for(i=0;i<x;i++)
    {
        if(a[i]==b[i])
        {
            cout<<"yes"<<endl<<l+1<<" "<<r+1<<endl;return 0;
        }
        else{cout<<"no"<<endl;return 0;}
    }
    return 0;
}
