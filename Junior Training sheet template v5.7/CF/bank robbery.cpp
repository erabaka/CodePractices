#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c,n,k,m=0;
    cin>>a>>b>>c>>n;
    while(n--)
    {
        cin>>k;
        if(k>b&&k<c)
        {
            m++;
        }
    }
    cout<<m<<endl;
}
