#include<bits/stdc++.h>
using namespace  std;
int main()
{
    long long x1,q2,r2,y1,x,y,x2,y2,z,i,j,k,l,m=0,n=0,s,q,r,q1,r1,p,v,p1,p2,v1,v2,w,a,b,c,d;
    cin>>s;
    for(i=0; i<s; i++)
    {
        cin>>a>>b>>c>>d;
        cin>>x>>y>>x1>>y1>>x2>>y2;
        int pp=x-a+b;
        int ppp=a+b;
        int vv=y-c+d;
        int vvv=c+d;

        p1=max(x1,x2);
        p2=min(x1,x2);
        v1=max(y1,y2);
        v2=min(y1,y2);
        p=(p1-p2)+1;
        v=(v1-v2)+1;
        w=a+b+c+d;
       // cout<<pp<<vv<<endl;
        //cout<<w<<endl;
        if(w>=1)
        {


             if(ppp>0&&x1==x2)
            {
                cout<<"No"<<endl;
            }
            else if(vvv>0&&y1==y2)
            {
                cout<<"No"<<endl;
            }
            else if((pp>=x1&&pp<=x2)&&(vv>=y1&&vv<=y2))

            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }




        }
        else
        {
            cout<<"No"<<endl;
        }


    }

}
