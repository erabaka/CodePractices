#include<stdio.h>
int main()
{
    int n,h,a[1001],i,l=0,m=0,s=0;
    scanf("%d %d",&n,&h);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(1<=a[i]||a[i]>=(2*h)){
        if(a[i]<=h)
        {
            l+=1;
        }
        else{m+=2;}}
    }
    s=l+m;
    printf("%d",s);
    return 0;
}
