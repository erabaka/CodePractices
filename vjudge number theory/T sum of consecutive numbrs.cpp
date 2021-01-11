#include<iostream>
#include<cmath>
 using namespace std;
  int main()
  {
      long long int a,b=0,c=0,d,i,j,k,l,m,n;
      cin>>a;
      for(i=1;i<=a;i++)
      {
          cin>>n;
          if(n%2==0)
          {m=0;
              m=n/2;
          }
          else{m=0;m=(n/2)+1;}
          for(k=1;k<=m;k++)
          {
          for(j=k;j<=m;j++)
          {
              b+=j;//cout<<b<<endl;
        if(b==n){c++;b=0;break;}
        else if(b>n)
        {
          b=0;  break;
        }


          }
      }
 cout<<"Case "<<i<<": "<<c<<endl;      c=0;
  }
  return 0;}

