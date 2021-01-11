#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int x,y,z;
    string s,t;
    cin>>s>>t;
    x=s.length();
    y=t.length();
    while(x>=0&&y>=0&&s[x]==t[y])
    {
        x--;y--;
    }
    cout<<x+y+2<<endl;
}
