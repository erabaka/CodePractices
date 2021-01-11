#include<stdio.h>
#include<string.h>
int main()
{
    int a,b=0,i,j,k,l=0,m=0,n=0;
    char s[1001];
    gets(s);
    a=strlen(s);
    for(i=0;i<a;i++)
    {if(s[i]=='{'||s[i]==' '||s[i]==','||s[i]=='}')
            {continue;}
            else if(s[i]>='a'&&s[i]<='z')
            {l++;}}
    for(i=1;i<a;i=i+3)
    {for(j=i+3;j<a;j=j+3)
        {if(s[i]>s[j])
            {k=s[i];
                s[i]=s[j];
                s[j]=k;}}}

     for(i=1;i<a;i=i+3)
    {if(s[i]==s[i+3])
            {m++;}}
    if(m>0){n=l-m;}
    else {n=l;}
    printf("%d\n",n);
    return 0;
}
