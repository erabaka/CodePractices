#include<stdio.h>
int main()
{
    int a[1001];
    int n,m=0,i,j,s=0,d=0,g=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);}
    i=0;j=n-1;
    while(i<=j)
    {
        if(a[i]>a[j])
        {
            m=a[i];i++;
        }
        else
        {
            m=a[j];j--;
        }
        if(g%2==0)
        {
            s=s+m;
        }
        else{d=d+m;}
        g++;
    }



        printf("%d %d",s,d);
return 0;
}
