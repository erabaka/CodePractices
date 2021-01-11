#include<stdio.h>
int main()
{
    int a,b,c,d,e,i,j,k,l=0,m=0,n=0,y,w;
    scanf("%d %d",&y,&w);
    if(y>w)
    {
        while(y<=6)
        {
            m++;y++;
        }
        if(m==1)
        {
            printf("1/6\n");
        }
        else if(m==2)
        {
            printf("1/3\n");
        }
         else if(m==3)
        {
            printf("1/2\n");
        }
         else if(m==4)
        {
            printf("2/3\n");
        }
         else if(m==5)
        {
            printf("5/6\n");
        }
         else if(m==6)
        {
            printf("1/1\n");
        }
         else
        {
            printf("0/1\n");
        }
    }
    if(w>=y)
    {
        while(w<=6)
        {
            m++;w++;
        }
        if(m==1)
        {
            printf("1/6\n");
        }
        else if(m==2)
        {
            printf("1/3\n");
        }
         else if(m==3)
        {
            printf("1/2\n");
        }
         else if(m==4)
        {
            printf("2/3\n");
        }
         else if(m==5)
        {
            printf("5/6\n");
        }
         else if(m==6)
        {
            printf("1/1\n");
        }
         else
        {
            printf("0/1\n");
        }
    }
    return 0;}


