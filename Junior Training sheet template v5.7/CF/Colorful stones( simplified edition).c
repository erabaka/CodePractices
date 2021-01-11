#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,j=0,a,b,c=0,d=0,n,m;
    char s[100],t[100];
    scanf("%s",s);
    scanf("%s",t);
    m=strlen(t);
    for(i=0;i<m;i++)
    {
        if(t[i]==s[c])
        {
            c++;
        }
    }
    printf("%d",c+1);
    return  0;
}
