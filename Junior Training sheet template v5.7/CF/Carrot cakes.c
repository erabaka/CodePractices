#include<stdio.h>
int main()
{
    int n,t,k,d,i,j,l=0;
    scanf("%d %d %d %d",&n,&t,&k,&d);
    if(n>t){
    if(t>=d||n>k||t<d||k>=n)
    {if(n<d){
        l=(n-1)/k;
        if((l*t)<=(d)){
            printf("NO\n");
    }else if((l*t)>(d))
    {
        printf("YES\n");
    }
     else {printf("NO\n");}}
    else if(n>=d){
    l=(n-1)/k;
    if((l*t)>(d))
        {
            printf("YES\n");
        }
         else {printf("NO\n");
    }
   }}}
   else if(n<=t){
    if(t>=d||n>k||t<d||k>=n)
    {if(n<=d){
        l=(n-1)/k;
        if((l*t)<=(d)){
            printf("NO\n");

    }
    else {printf("YES\n");}}
    else if(n>=d){
    l=(n-1)/k;
    if((l*t)>(d))
        {
            printf("YES\n");
        }

         else {printf("NO\n");
    }
   }}}
    return 0;
}
/**#include<stdio.h>
int main()
{
    int n,t,k,d,i,j,l=0;
    scanf("%d %d %d %d",&n,&t,&k,&d);
    if(d<(n-1)/k*t)
    {
        printf("YES");

    }
    else {printf("NO");}
    return 0;}
**/
