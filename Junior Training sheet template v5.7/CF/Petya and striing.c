#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,k,l=0,m=0;
    char a[101],b[101],c[101],d[101];
    scanf("%s",a);
    scanf("%s",b);
    n=strlen(a);
    for(i=0;i<n;i++){
    if(a[i]>='A'&&a[i]<='Z')
            {a[i]=a[i]+32;}
            if(b[i]>='A'&&b[i]<='Z')
            {b[i]=b[i]+32;}}
for(i=0;i<n;i++)
{
    if(a[i]>b[i])
    {
        k=1;break;
    }
    else if(a[i]<b[i])
    {
        k=-1;break;
    }else{k=0;}}
    printf("%d",k);

 return 0;
}
