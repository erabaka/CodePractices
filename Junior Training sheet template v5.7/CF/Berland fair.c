#include<stdio.h>
#include<math.h>
#include<stdlib.h>
a[200009];
int main()
{
long long    int n,i,j,m,b=0,c=0,d,T,k=0,l=10000000009;
    scanf("%lld %lld",&n,&T);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    i=0;
    for(i=0;i<n;i++)
    {
        if(a[i]<l){
            l=a[i];
        }
    }
    //printf("%d\n",l);

    while(l<=T){k=0;b=0;
    for(i=0;i<n;i++)
    {if(a[i]<=T)
    {
    T-=a[i];
    k++;
    b+=a[i];}}
   // printf("%lld %lld\n",T,k);}}

    //printf("%d\n",b);
    c+=k;
    //printf("%d\n",c);
    c+=k*(T/b);
    //printf("%d\n",c);
    T-=(T/b)*b;
    //printf("%lld\n",T);
    }
    printf("%lld\n",c);
    return 0;

}
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
a[200009];
int main()
{
    long long int n,i,j,m,b=0,c=0,d, T,k=0,l=10000000009;;
    scanf("%lld %lld",&n,&T);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    i=0;
    for(i=0;i<n;i++)
    {
        if(a[i]<l){
            l=a[i];
        }
    }
    //printf("%d\n",l);

    while(l<=T){
    for(i=0;i<n;i++)
    {if(a[i]<=T)
    {
    T-=a[i];
    k++;
    }}}
   // printf("%lld %lld\n",T,k);}}
    //printf("%d\n",b);
    printf("%lld\n",k);
    return 0;

}
