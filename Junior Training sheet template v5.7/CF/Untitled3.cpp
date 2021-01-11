
#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
unsigned long long 	int n,a,x,b,y,c=0,d=0;
	cin>>n>>a>>x>>b>>y;
	while(1)
	{

		a++;b--;
		if (a==b){c=1;break;}
		if(a>n)
		{
			a=a%n;
			if (a==x){c=0;break;}
		}

	if(b<1){b=n;if (b==y){c=0;break;}}

	}


	if(c==1)
	{cout<<"YES"<<endl;}
	else
	{cout<<"NO"<<endl;}
	return 0;
}
