#include<stdio.h>
#include<string.h>
int main()
{
    long long int x,d,i,j,k,l=0,m=0,n;
    char c[3];
    scanf("%lld %lld",&n,&x);
    for(i=0;i<n;i++)
    {
        scanf("%s %lld",&c,&d);
        if(c[0]=='+')
        {
            x=x+d;
        }
        else{
            if(x<d)
            {
                l++;
            }
            else{x=x-d;}
        }}
    printf("%lld %lld\n",x,l);
    return 0;}
