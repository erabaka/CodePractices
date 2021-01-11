#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int x,y,w,h,r,u1,u2,d1,d2,s=0,i,j,k,l,m,n,p,q;
    cin>>w>>h;
    cin>>u1>>d1;
    cin>>u2>>d2;
    while(h!=0)
    {
        w+=h;
        if(h==d1)
        {
            w-=u1;
        }
        if(h==d2)
        {
            w-=u2;
        }
        if(w<0)
        {
            w=0;
        }
        h--;
    }
    cout<<w<<endl;
    return 0;}
