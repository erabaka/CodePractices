#include<stdio.h>
int a[200005];
int main()
{
    long long n,t,i,j,x,mn=1000000005,k,sum,c=0;
    scanf("%I64d %I64d",&n,&t);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        if(mn>a[i])
        {
            mn=a[i];
        }
    }
    while(mn<=t)
    {
        k=0;
        sum=0;
        for(i=0; i<n; i++)
        {
            if(a[i]<=t)
            {
                k++;
                t-=a[i];
                sum+=a[i];
                printf("%d\n",t);
            }
            printf("%d\n",k);
        }printf("%d\n",sum);
        c+=k;
        printf("%d\n",c);

        c+=k*(t/sum);
        printf("%d\n",c);
        t-=(t/sum)*sum;
        printf("%d\n",t);
    }
    printf("%I64d\n",c);
    return 0;
}
