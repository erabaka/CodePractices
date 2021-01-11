#include<stdio.h>
int main()
{
    int k,r,s=1,n;
    scanf("%d %d",&k,&r);
    while(1)
    {
        if((k*s)%10==r||(k*s)%10==0)
        {
            break;
        }
        s++;
        }
        printf("%d",s);

    return 0;
}
