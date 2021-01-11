
/**#include<stdio.h>
#include<string.h>
int main()
{
    int n,k,i,j=0,b,c,d;
    char a[5001];
    scanf("%d %d",&n,&k);
    b=n-k;
    for(i=1;i<=n;i++)
    {
        for(j=0;j<1;j++)
        {if(k>0){
            a[i]=97+k;k--;}
            else{a[i]=97+1;}
        }

    printf("%c",a[i]);}
    return 0;
}
**/

#include<stdio.h>
#include<string.h>
int main()
{
    int n,k,i,j=0,b,c,d;
    char a[5001];
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        a[i]=97+((i)%(k));
    printf("%c",a[i]);}
    return 0;
}
