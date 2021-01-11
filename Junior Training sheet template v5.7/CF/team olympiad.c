#include<stdio.h>
int main()
{
    int n,t[5001],u[5001],v[5001],i,j=1,k=0,l=0,m=0,w=0,i1=1,i2=1,i3=1;
    scanf("%d",&n);
    int a[n];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==1)
        {
            k++;
            t[i1++]=i;
        }
         if(a[i]==2)
        {
            l++;
            u[i2++]=i;
        }
         if(a[i]==3)
        {
            m++;
            v[i3++]=i;
        }
    }
    if(k<=l&&k<=m)
    {
        w=k;

    }
   else if(l<=k&l<=m)
    {
        w=l;
    }
    else{w=m;}
    printf("%d\n",w);
    for(j=1;j<=w;j++)
    {
        printf("%d %d %d\n",t[j],u[j],v[j]);

    }
    return 0;
}
