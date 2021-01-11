#include<stdio.h>

int main()
{
    long long int n,b,d,l=0,s=0,m=0,c=0,i,j;
    scanf("%lld %lld %lld",&n,&b,&d);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&j);
    if(j>b)
    {
    continue;
    }
    else{s=s+j;}
    if(s>d){
        c++;s=0;
    }}
    printf("%lld",c);
    return 0;
}
