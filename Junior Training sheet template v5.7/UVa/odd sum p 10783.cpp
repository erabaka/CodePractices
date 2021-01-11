#include<iostream>
using namespace std;
int main()
{
    int T,a,b,s=0,i;
    cin>>T;
    for(i=1;i<=T;i++)
    {
        cin>>a>>b;
        if(a>b)
        {
            swap(a,b);
        }s=0;
        while(a<=b)
        {
            if(a%2!=0)
            {
                s+=a;
            }a++;
        }
        cout<<"Case "<<i<<": "<<s<<endl;
    }
}
