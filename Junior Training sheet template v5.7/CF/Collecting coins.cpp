//mozzarellar submission ghatte jeye korte mon chailo
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    long long int a,b,c,d,m,n,p,q,r,s1=0,s2=0,ey,ss=0,y=0;
    cin>>ey;
    for(a=0; a<ey; a++)
    {
        cin>>b>>c>>d>>n;
        r=b+c+d;

        /*if(b>=c&&b>=d)
        {
            m=b;
        }
        else if(c>=b&&c>=d)
        {
            m=c;
        }
        else
        {
            m=d;
            }
        if(b<=c&&b<=d)
        {
            p=b;
        }
        else if(c<=b&&c<=d)
        {
            p=c;
        }
        else
        {
            p=d;
        }*/
        m=max(b,max(c,d));
        p=min(b,min(c,d));

        q=r-(m+p);
        // cout<<m<<p<<q<<endl;
        while(p!=m)
        {
            p++;
            s1++;

        }
        while(q!=m)
        {
            q++;
            s2++;
        }
        //cout<<s1<<s2<<endl;
        ss=s1+s2;
        y=n-ss;

        if(ss>n)
        {
            cout<<"NO"<<endl;
        }
        else if(ss<n)
        {

            if(y%3==0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"YES"<<endl;
        }

        m=0,p=0,q=0,s1=0,s2=0,ss=0,y=0;
    }
    return 0;

}
