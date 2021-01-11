#include<stdio.h>
#include<string.h>

int main()
{long int l=0,i,j,n,m;
 char a[100000+1];
    scanf("%ld",&n);
    scanf("%s",a);
    if(n<27){
    for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
          if(a[i]==a[j])
               {l++;}}}}
if(n>27){
    for(i=0;i<27;i++){
    for(j=i+1;j<27;j++){
          if(a[i]==a[j])
               {l++;}}}}
        if(n==27){
    for(i=0;i<=n;i++){
    for(j=i+1;j<=n;j++){
          if(a[i]==a[j])
               {l++;}

        }}}

if(l>0)

    printf("YES\n");
    else if(n==1)
        printf("YES\n");
    else
        printf("NO\n");

return 0;}
