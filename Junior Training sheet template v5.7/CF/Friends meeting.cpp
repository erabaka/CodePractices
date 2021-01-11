#include<iostream>
using namespace std;
int main()
{
    int a,b,c=0,d,i=0,j,k,l=0,p=0,m,n;
    cin>>a>>b;
    d=max(a,b);
    n=min(a,b);
    j=d+n;
    if(j%2==0)
    {
        k=j/2;
        while(d>k)
        {
            d--;c++;l+=c;}//cout<<l<<endl;}
            while(n<k){
            n++;i++;p+=i;}//cout<<p<<endl;}
        }

    else{
        k=(j/2)+1;//cout<<k<<endl;

       while(d>k)
        {
            d--;c++;l+=c;}//cout<<l<<endl;}
            while(n<k){
            n++;i++;p+=i;}//cout<<p<<endl;}
        }


    m=l+p;
    cout<<m<<endl;
}
