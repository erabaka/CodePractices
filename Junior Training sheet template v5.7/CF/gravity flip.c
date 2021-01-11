#include<stdio.h>
int main()
{
    int a[100];
    int i,j,k,l,m,n;
    scanf(" %d",&n);
    for(i=0;i<n;i++)
    {
        scanf(" %d",&a[i]);
    }
       for(i=0;i<n;i++)
        {for(j=i+1;j<n;j++)
        {
                if(a[i]>a[j])
                {
                k=a[i];
                a[i]=a[j];
                a[j]=k;

            }}
        }
        for(i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }
    return 0;
}
