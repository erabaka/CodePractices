#include<iostream>
#include<cstdlib>
#define EOF -1
using namespace std;
int main()
{
    int i,j;
    while(cin>>i>>j&&(i,j)!=EOF)
    {
        cout<<i<<" "<<j<<" ";
        if(i>j)
        {
            swap(i,j);
        }
        int a=0;
        while(i<=j)
        { int l=1;

            int m=i;//cout<<m<<endl;
            while(m!=1)
            {
                if(m%2!=0)
                {
                    m=(m*3)+1;
                }
                else{m/=2;}l++;//cout<<l<<endl;
            }
            i++;
if(a<l)a=l;
        }
cout<<a<<endl;
    }

}
