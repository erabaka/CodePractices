#include<bits/stdc++.h>
#include<vector>
#include<cmath>

using namespace std;


int main()
{
    int s;
    cin>>s;
    for(int i=0;i<s;i++)
    {
        int n;
        cin>>n;
        vector<long long> p1,p2;
      for(int k=0;k<n;k++)
        {
           long long a;
            cin>>a;
        p1.push_back(a);

        }
sort(p1.begin(),p1.end());
      long long u=p1[0]*p1[n-1];

for(long long j=2;j<=sqrt(u);j++)
{
    if(u%j==0)
    {
        p2.push_back(j);
        if(j!=u/j)
       {

        p2.push_back(u/j);}
    }
}


sort(p2.begin(),p2.end());

if(p2==p1)
cout<<u<<endl;
else
cout<<"-1"<<endl;
}return 0;}
