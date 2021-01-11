#include<iostream>
#include<cstring>
using namespace std;
int main()
{

	int a[10005],b[99999],c[99999],d=0,i,j,k,l=0,m=0,n=0,p=0,q=0;
	for(i=0;i<6;i++)
	{ cin>>a[i];
	d+=a[i];}
	for(i=0;i<6;i++){
		for(j=i+1;j<6;j++){
			for(k=j+1;k<6;k++)
			{
		m=0;p=0;
		m	 =a[i]+a[j]+a[k];
		p=d-m;
		//	 cout<<l<<endl;
				  b[l++]=m;
				 c[q++]=p;
				  }}}

			//	 for(i=0;i<l;i++)
	//	{	  cout<<b[i]<<endl;}
				  for(i=0;i<l;i++)

				  {if(b[i]==c[i])
				  {n++;//cout<<b[i]<<" "<<c[i]<<endl;
				  }}//else{n=0;}}
				  if(n>=1){cout<<"yes"<<endl;}
				  else{cout<<"no"<<endl;}

}
