#include<iostream>
#include<cstring>
using namespace std;



int main()

{
    string a;
    int i,j,k,l=0,m,n=0;
    cin>>k;
for(j=0;j<k;j++)
{
    cin>>a;
 cout<<"Case "<<j+1<<":"<<" ";

    n=a.length();
    if(n==1||n==2)
    {
        for(i=0;i<n;i++)
        {
            a[i]=a[i]+1;
        }
    }
    else if(n==3)
    {
        for(i=1;i<2;i++){a[i]=a[i]+1;}
    }
    else{
    for(i=1;i<n-1;i++)
    {if(a[i+1]>a[i]){
            l=a[i+1];}}

    for(i=1;i<n-1;i++)
        {
            a[i]=l;
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i];


    }
    cout<<endl;}
    return 0;
}
