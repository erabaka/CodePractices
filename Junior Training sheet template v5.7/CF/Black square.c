#include<stdio.h>
#include<string.h>
int main()
{
    int a[4],n=4,i,b,c=0,d=0,e=0,f=0,g=0;
    char s[100001];
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);}

    scanf("%s",s);
    b=strlen(s);
    for(i=0;i<b;i++)
    {
        if(s[i]=='1')
        {
            c++;
        }
        if(s[i]=='2')
        {
            d++;
        }
        if(s[i]=='3')
        {
            e++;
        }
     if(s[i]=='4')
        {
            f++;
        }
    }
    g=((c*a[0])+(d*a[1])+(e*a[2])+(f*a[3]));
    printf("%d",g);
}
