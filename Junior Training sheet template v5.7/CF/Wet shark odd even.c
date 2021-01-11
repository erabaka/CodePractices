
#include<stdio.h>
long long int n,a,i,m=1e9+1,sum=0;
int main(){
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a);
        if(a%2!=0 && a<m){ m=a;}
        sum+=a;
    }
    if(sum%2==0) {
    printf("%lld\n",sum);}
    else{sum-=m;printf("%lld",sum);}

    return 0;
}
/**#include<stdio.h>
int main()
{
    long long int n,i=0,j,s=0,v,c=0,d=0;
    scanf(" %lld",&n);
    long long int a[n];
     for(i=1;i<=n;i++)
     {
         scanf("%lld",&a[i]);
     }
     for(i=1;i<=n;i++)
     {
         for(j=i+1;j<=n;j++)
         {
             if(a[i]>a[j])
             {
                 v=a[j];
                 a[j]=a[i];
                 a[i]=v;
             }
         }
     }
     for(i=1;i<=n;i++)
     {
         s=s+a[i];
     }
     if(s%2==0)
     {
         printf("%lld",s);
     }
     else
        {i=1;
            s=s-a[i];
            printf("%lld",s);
        }


    return 0;
}**/
/**#include<stdio.h>
int main()
{
    long long int n,i=0,j,s=0,v,c=0,d=0;
    scanf(" %lld",&n);
    long long int a[n];
     for(i=1;i<=n;i++)
     {
         scanf("%lld",&a[i]);
     }
for(i=1;i<=n;i++)
{
    s=s+a[i];
}
if(s%2==0)
{
    printf("%lld",s);

}
if(s%2!=0)
{
    for(i=1;i<=n;i++)
    {for(j=i+1;j<=n;j++)
    {if(a[i]>a[j])
    {
        v=a[j];
        a[j]=a[i];
        a[i]=v;
    }}}
for(i=1;i<2;i++){
    if(a[i]<=a[i+1]&&a[i]%2!=0)
    {
        s=s-a[i];
        if(s%2==0)
        {
      break;
        }
    }

}printf("%lld",s);}

    return 0;
}
**/
