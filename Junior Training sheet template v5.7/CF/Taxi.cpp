#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100001],i,j=0,k=0,l=0,m=0,n,b,c,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }for(i=0;i<n;i++){
    if(a[i]==1)
    {
        k++;
    }
    else if(a[i]==2)
    {
        l++;
    }
    else if(a[i]==3)
    {
        m++;
    }
    else{j++;}
       }
       if(k==m)
       {
           b=k;
           k=0;m=0;
       }
      else if(k>m)
       {
           b=m;
           k=k-m;
           m=0;
       }
       else if(m>k)
       {
           b=k;
           m=m-k;
           k=0;
       }
       l=l*2;
       if(k>0)
       {
           l=l+k;
           c=l/4;
           if(l%4!=0)
           {
               c++;
           }
       }
       else if(k==0)
       {
           c=l/4;
           if(l%4!=0)
           {
               c++;
           }
           }
           printf("%d",b+m+c+j);
           return 0;}
