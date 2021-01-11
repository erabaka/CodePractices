#include<stdio.h>
#include<string.h>
int main()
{
    int b,n,i,j=0;
    char a[101];
    scanf(" %d",&n);
    scanf(" %s",a);
    b=strlen(a);
    for(i=0;i<b;i++)
    {
        if(a[i]==a[i+1])
            {
                j++;
            }
    }
    printf("%d",j);
    return 0;
}
