#include<stdio.h>
int main()
{
    int a[100001],c=0,d=0,e,f,i,j;
    long int b;
    scanf(" %ld",&b);
    for(i=0;i<b;i++)
    {
        scanf(" %d",&a[i]);
    }
    for(i=0;i<b;i++)
    {
        if(a[i]==a[i+1])
        {
            c++;
            }
    }
    if(c>1){
    d=c-(c-1);}
    else{d=d+1;}
    for(i=0;i<b;i++)
    {
        if(a[i]!=a[i+1])
        {
            d=d+1;
}
    }
    d=d-1;
    printf("%d",d);
}
