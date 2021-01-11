
#include<stdio.h>
int main()
{
    int n,i=0,j,k,m,l=0,v=0;
   scanf("%d",&n);

    while(n--)
    {
        scanf(" %d %d %d",&k,&j,&m);
        l=k+j+m;
        if(l>=2)
        {
            v++;
        }
    }
    printf("%d",v);
    return 0;}

