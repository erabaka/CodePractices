#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int a=0, b=0,c,i,j=0,k=1;
	string d;
	cin>>d;
	c=d.length();
	for(i=0;i<c;i++)
	{ if(d[i]=='4'){a++;
	}

	else if (d[i]=='7'){b++;}
//	if(d[i]!='4'||d[i]!='7'){j=1;}
}
//if(a>0){a=a+k;}
//cout<<a<<b<<endl;
if(a>0&&a>=b){ cout<<'4'<<endl;}
else if (b>a){cout<<'7'<<endl;}
else{ cout <<'-'<<'1'<<endl;}
}
