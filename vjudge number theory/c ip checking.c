#include<stdio.h>
#include<string.h>
int main()
{
    int x,y=0,z,m[4],n[4],p,q,r,s,i,j,k,l=0;
    char a[10009],b[10009];
    scanf("%d",&x);
    for(p=1;p<=x;p++)
    {
        for(i=0;i<4;i++)
        {
            m[i]=n[i]=0;
        }
        scanf("%s %s",&a,&b);
        for(i=0,j=0;a[j];j++)
        {
            if(a[j]=='.')
            {
                i++;
            }
            else{
             y=a[j]-48;
             m[i]=m[i]*10+y;
            }
        }
        for(i=0,j=0;b[j];j++)
        {
            if(b[j]=='.')
            {
                i++;
            }
            else{
             y=b[j]-48;
             n[i]=n[i]*2+y;
    }}
    l=0;
    for(k=0;k<4;k++)
    {
        if(m[k]==n[k])
        {
            l++;
        }
    }
    if(l==4)
    {
        printf("Case %d: Yes\n",p);
    }
    else{
        printf("Case %d: No\n",p);
    }
}
return 0;}
