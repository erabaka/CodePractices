#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    long long int a,b=0,c=0,d=0,m=0,n,i,j,k,l=0;
    cin>>a;
    for(i=1;i<=a;i++)
    {
        cin>>n;
        m=0;
        l=0;
l=sqrt(n);

        for(j=2;j<=l;j++)
        {m=n/j;
            c+=((j+m)*((m-j)+1))/2;
            d+=j*(m-j);
        }
        b=c+d;
        c=0;d=0;
        cout<<"Case "<<i<<": "<<b<<endl;
        b=0;
    }
}
