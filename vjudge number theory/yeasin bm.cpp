
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{

    int arr[5][5];
    int i,j;
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            cin>>arr[i][j];
        }
    }

    int m=0,sum=0,sum1=0,p=0,q=0;
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            if(arr[i][j]==1)
            {
                p=i;
                q=j;

            }

        }

    }
    p=2-p;
    q=2-q;
    sum=abs(p);
    sum1=abs(q);

    cout<<sum+sum1;

}
