#include<stdio.h>
int main()
{
    int n,m,a[101],x,y,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        scanf("%d %d",&x,&y);
        a[x-1]=a[x-1]+(y-1);
        a[x+1]=a[x+1]+(a[x]-y);
        a[x]=0;
    }
    for(i=1;i<=n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
