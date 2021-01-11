#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,l=0,m=0,k;
    char s[100001];
    scanf("%d",&n);
    scanf("%s",s);
    j=strlen(s);
    for(i=0;i<j;i++)
    {
            if(s[i]=='A'){l++;}
            if(s[i]=='D'){m++;}

    }
    if(l>m){printf("Anton\n");}
    else if(m>l){printf("Danik\n");}
    else{printf("Friendship\n");}
    return 0;

}
