
#include<bits/stdc++.h>
using namespace std;
int main()
{
int w,x,y,z,i,j,k,l,a,b,c;
cin>>w;
for(i=0;i<w;i++)
{
    cin>>x;
     set<int> ey;
    for(j=0;j<x;j++)
    {

    cin>>y;
    ey.insert(y);
    }
    cout<<ey.size()<<endl;
}

}
