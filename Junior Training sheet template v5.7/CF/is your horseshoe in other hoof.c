#include<stdio.h>
int main()
{

    long int a[4],b,i,j,d,c,e=0;
for(i=0;i<4;i++)
{
    scanf("%ld",&a[i]);
}
for(i=0;i<4;i++)
{for(j=i+1;j<4;j++){
    if(a[i]>a[j])
    {
        c=a[j];
        a[j]=a[i];
        a[i]=c;
    }}}
    for(i=0;i<4;i++)
    {
        if(a[i]==a[i+1])

{
    e++;
}
    }

printf("%ld",e);
    return 0;
}
