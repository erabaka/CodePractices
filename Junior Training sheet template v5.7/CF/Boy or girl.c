
#include<stdio.h>
#include<string.h>
int main()
{
    int n,m,k=0,l,v=0,s=0;
    char a[101];
    scanf("%s",a);
    n=strlen(a);
    for(m=0;m<n;m++)

    {for(l=m+1;l<n;l++)
    {
        if(a[m]>a[l])
        {
            k=a[l];
            a[l]=a[m];
            a[m]=k;

        }
    }}
    for(m=0;m<n;m++)
    {
        if(a[m]==a[m+1])
        {
            s++;
        }
    }
    v=n-s;

    if(v%2==0)
    {
        printf("CHAT WITH HER!\n");

    }else {printf("IGNORE HIM!\n");}
    return 0;

}
