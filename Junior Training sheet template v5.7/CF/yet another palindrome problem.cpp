
#include<bits/stdc++.h>
//#include<iostream>
#define ll long long int
#define s(l) scanf("%lld",&l)
using namespace std;
int main()
{
	ll a[55555],i,j,k=0,m,n,w,x=0,y,z;
	s(n);
	while(n--)
	{
		s(m);
		for(i=0;i<m;i++)
		{
			s(a[i]);
		}
		for(j=0;j<m;j++)
		{
		for(k=j+2;k<m;k++)
		{
			if(a[j]==a[k])
			{
				x++; //cout<<x<<endl;
                    break;
			}
		}

		}
		if(x>0)
		{
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
        x=0;
	}
}
