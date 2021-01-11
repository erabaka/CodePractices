
#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,d,e=0,i,j=0,k=0,l=0;
    char s[101],r[101],w[101];
    scanf("%s",s);
    a=strlen(s);
    for(b=0;b<a;b=b+2)
    {for(c=b+2;c<a;c=c+2)
    {
        if(s[b]>s[c])
        {
            d=s[b];
            s[b]=s[c];
            s[c]=d;
        }
    }
    }
    printf("%s",s);
return 0;}
