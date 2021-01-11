#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,j,k;
    scanf(" %d %d %d",&a,&b,&c);
    d = (a+b)+c;
    e = (a+b)*c;
    f = (a*b)+c;
    g = (a*b)*c;
    h = a+(b*c);
    i = a*(b+c);

    if(d>=e&&d>=g&&d>=f&&d>=h&&d>=i)
      {
          printf("%d",d);}
 else if(e>=d&&e>=g&&e>=f&&e>=h&&e>=i)
        {printf("%d",e);}
    else if(g>=e&&g>=d&&g>=f&&g>=h&&g>=i)
    {printf("%d",g);}
     else if(i>=e&&i>=d&&i>=f&&i>=h&&i>=g)
    {printf("%d",i);}
    else if(f>=e&&f>=g&&f>=d&&f>=h&&f>=i)
     {printf("%d",f);}
     else{printf("%d",h);}
    return 0;

}
