#include<iostream>
#include<cmath>

using namespace std;
int parlamna(int y)
{
    int i,k=0,m;
    k=sqrt(y);
    for(i=2;i<=k;i++)
    {
        if(y%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    cin>>n;
    if(parlamna(n))
    {
    cout<<1<<endl;
    }
    else if(n%2==0||parlamna(n-2))
    {
        cout<<2<<endl;
    }
    else{cout<<3<<endl;}
    return 0;}
