#include<stdio.h>
int main()
{
    int a[100001],i,k=0,l,m=0,n,b=0,c,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=0;i<n;i++)
    {if(a[i]==1||a[i]==2||a[i]==3){
        m+=a[i];
        if(m>4)
        {
            l=m-4;m=0;
            m=m+l;
          l=0;  k++;continue;
        }
        else if(m==4)
        {
            k++;m=0;
        }
        else{continue;}
    }else{b++;}}
    if(m>0&&m<4)
    {
        k++;
    }
    if(l>0&&l<4){k++;}
    printf("%d",k+b);
    return 0;
}
