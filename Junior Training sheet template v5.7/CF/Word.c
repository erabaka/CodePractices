# include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c=0,d=0,e,f,g,h;
    char s[101];
    scanf(" %s",s);
    a=strlen(s);
    for(b=0;b<a;b++)
    {
        if(s[b]>='A'&&s[b]<='Z')
        {
            c++;;
        }
        if(s[b]>='a'&&s[b]<='z')
        {
            d++;
        }
    }
    if(d>c){
        for(b=0;b<a;b++)
        {if(s[b]>='A'&&s[b]<='Z'){
            s[b]=s[b]+32;}}
        }
   else if(c>d){for(b=0;b<a;b++){
    if(s[b]>='a'&&s[b]<='z')
            {s[b]=s[b]-32;}}
        }

    else{for(b=0;b<a;b++){
        if(s[b]>='A'&&s[b]<='Z'){s[b]=s[b]+32;}}}
        printf("%s",s);
        return 0;
}
