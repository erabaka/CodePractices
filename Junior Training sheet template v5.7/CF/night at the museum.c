#include<stdio.h>
#include<string.h>
int main()
{
    int c=0,d=0,i,a,m=0;
    char s[101];
    scanf("%s",s);
    a=strlen(s);
    int e='a';
    for(i=0;i<a;i++)
    {
    c=abs(e-s[i]);
    if(c>13)
    {
        c=26-c;
    }else{c=c;}
    m=m+c;
    e=s[i];}

    printf("%d",m);
    return 0;
}
