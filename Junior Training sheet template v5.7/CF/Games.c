/**#include<stdio.h>
int main(){
int h[100][100],n,i,j,c=0,l,m,d=0,s,t;
scanf("%d",&n);
for(i=0;i<n;i++){
    for(j=0;j<2;j++)
    {
        scanf("%d",&h[i][j]);
    }}
    i=0;
    j=0;
 s=i+1;
 t=1;

for(i=0;i<n-1;i++)
{
    for(j=0;j<1;j++)
    {
        for(s=i+1;s<n;s++)
        {
            for(t=1;t<2;t++)
            {
                if(h[i][j]==h[s][t])
                   {
                c++;}
            }

        }
    }
}
 i=n-1;
    j=0;
 l=i;
 m=1;

for(i=n-1;i>=0;i--)
{
    for(j=0;j<1;j++)
    {
        for(l=i;l>=0;l--)
        {
            for(m=1;m>0;m--)
            {
                if(h[i][j]==h[l][m])
                   {
                d++;}
            }

        }
    }
}
printf("%d\n",c+d);
return 0;
}*/
#include<stdio.h>
int main()
{
    int h[100],g[100],i,j,c=0,n;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d %d",&h[i],&g[i]);

    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(h[i]==g[j])
            {
                c++;
            }
        }
    }
    printf("%d",c);
    return 0;
}
