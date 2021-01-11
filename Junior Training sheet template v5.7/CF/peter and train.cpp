#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c,d,s,z;
    long long i,j,k=0,l=0,m,n;
    cin>>a;
    d=a;
    //cout<<d<<endl;
    n=a.length();
    //strcpy(d,a);

    reverse(a.begin(),a.end());
    /*for(i=0,j=n-1;i<n,j>=0;i++,j++)
    {
       swap( d[i],d[j]);
        cout<<d[j]<<endl;
    }*/
    //cout<<a<<endl;
    cin>>b>>c;


        if(a.find(b)&&d.find(b))

        {
            k++;//cout<<"both"<<endl;
        }
        if(a.find(c)&&d.find(c))
        {
            l++;
        }
        if(k>0&&l>0&&k==l)
        {
            cout<<"both"<<endl;
        }
        else if(k>l)
        {
            cout<<"backward"<<endl;
        }
        else if(l>k)
        {
            cout<<"forward"<<endl;
        }
        else{
            cout<<"fantasy"<<endl;
        }
        /*else if(a.find(b)&&a.find(c))
        {
            cout<<"forward"<<endl;
        }
        else if(d.find(b)&&d.find(c))
        {
            cout<<"backward"<<endl;
        }
    else
        {
            cout<<"fantasy"<<endl;
        }*/
        cout<<k<<l<<endl;



}
