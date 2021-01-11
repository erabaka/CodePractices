
#include<bits/stdc++.h>
 #define ll long long int
 #define s(l,lo) scanf("%lld %lld",&l,&lo)
 #define sc(p) scanf("%lld",&p)
 using namespace std;
 int  main()
 {
     ll a,b,c=0,c1=0,d=0,x,y,i,j,k,m,n=0,n1=0,d1=0,n2=0,d2=0,n3=0,d3=0,n4=0,d4=0;
     sc(m);
     for(i=0;i<m;i++)
     {
         s(x,y);
         scanf("\n");
         s(a,b);
         n=max(x,y);//cout<<n<<endl;
         d=min(x,y);
         //cout<<x<<y<<a<<b;
         //cout<<d<<endl;
         n1=n-d;//a cout<<n1<<endl;
         d1=n-n1;//b cout<<d1<<endl;
         n2=a*n1;//cout<<n2<<endl;
         d2=b*d1;//
         //n3=b*n1;
         //d3=a*d1;//
         //n4=min(n2,n3);
        // d4=min(d2,d3);//cout<<d2<<endl;
         c=n2+d2;
         c1=a*(n+d);
         n4=min(c,c1);
         cout<<n4<<endl;}}


