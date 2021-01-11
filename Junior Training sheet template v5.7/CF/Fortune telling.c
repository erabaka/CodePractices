#include<stdio.h>
int main()
{
     int n,i=0,j,s=0,v,c=0,d=0;
    scanf(" %d",&n);
     int a[n];
     for(i=1;i<=n;i++)
     {
         scanf("%d",&a[i]);
     }
     for(i=1;i<=n;i++)
     {
         for(j=i+1;j<=n;j++)
         {
             if(a[i]>a[j])
             {
                 v=a[j];
                 a[j]=a[i];
                 a[i]=v;
             }
         }
     }
     for(i=1;i<=n;i++)
     {
         s=s+a[i];
     }
     if(s%2!=0)
     {
         printf("%d",s);
     }
     else
        {i=1;
        while(i<=n){
            s=s-a[i];
            if(s%2!=0){
            break;}else {s=s+a[i];i++;}}
            if(s%2!=0){printf("%d",s);}
            else{printf("0\n");}

        }
        return 0;


}

