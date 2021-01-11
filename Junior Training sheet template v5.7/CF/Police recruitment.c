#include<stdio.h>
int main()
{
    int i,j,c=0,d=0,n,a[100001];
    scanf("%d",&n);
   for(i=0;i<n;i++)
    { scanf("%d",&a[i]);}
for(i=0;i<n;i++){
    if(a[i]>0)
    {
        c=c+a[i];
    } if (a[i]<0)
    {
        if(c>0)
        {
            c=c-1;
        }

        else{ d=d+1;}
    }}
    printf("%d",d);



    return 0;
}
