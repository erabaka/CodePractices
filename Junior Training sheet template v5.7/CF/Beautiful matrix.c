#include<stdio.h>
int main(){
int a[5][5],i,j,k=0,s,t=0,u=0,v=0,x=0,y=0,z=0;
for(i=0;i<5;i++)
{
    for(j=0;j<5;j++)
    {
        scanf("%d",&a[i][j]);}}
     for(i=0;i<5;i++)
{
    for(j=0;j<5;j++)
    {if(a[i][j]==1){
      while(i<2)
      {s=a[i][j];
      a[i][j]=a[i+1][j];
      a[i+1][j]=s;t++;i++;}

           while(i>2)
      {s=a[i][j];
      a[i][j]=a[i-1][j];
      a[i-1][j]=s;u++;i--;}
      if(i==2)
      {while(j<2)
      {s=a[i][j];
      a[i][j]=a[i][j+1];
      a[i][j+1]=s;v++;j++;}
       while(j>2)
      {s=a[i][j];
      a[i][j]=a[i][j-1];
      a[i][j-1]=s;x++;j--;}}
      }
    }}
    printf("%d",t+u+v+x);
}

