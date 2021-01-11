
#include<bits/stdc++.h>
using namespace std;
#define m 200009
int main()
{
    int a[m],i,j=0,k=0,l=0,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        l+=a[i];}
        sort(a,a+n);
        for(i=0;i<n;i++)
        {
            if(k<a[i])
            {
                k++;

            }

        }
cout<<k<<endl;
return 0;
}
