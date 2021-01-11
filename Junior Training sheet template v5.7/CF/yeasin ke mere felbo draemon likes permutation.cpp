#include<bits/stdc++.h>

long long int aa[200100],bb[200100];
using namespace std;
int main()
{
    long long int a=0,b=0,a1=0,b1=0,c=0,d=0,c1=0,d1=0,i,k,m,n,p,w=0,ok=0,ok1=0,okk=0,okk1=0,okay=0,oh=0,ohh=0;
    set<long long int> pp;
    set<long long int> qq;
    set<long long int> rr;
    set<long long int> ss;
    vector<long long int> mm;
    cin>>n;
    mm.clear();
    for(i=0; i<n; i++)
    {
        cin>>m;
        for(p=0; p<m; p++)
        {
            cin>>bb[p];
        }
        pp.clear();

        for(k=0; k<m; k++)
        {
            aa[bb[k]]++;
            if(aa[bb[k]]>=2)
            {
                //     cout<<mm[k]<<k<<endl;
                break;
            }

            else
            {
                pp.insert(bb[k]);
            }
        }
        //cout<<k<<endl;
        qq.clear();
        for(w=k; w<m; ++w)
        {
            // cout<<w<<endl;
            qq.insert(bb[w]);
        }
        for(int j=0;j<m;j++)
        {
            aa[j]=0;
        }
        a=*--pp.end();
        //cout<<a<<endl;
        b=*--qq.end();
        //cout<<b<<endl;
        a1=pp.size();
        //cout<<a1<<endl;
        b1=qq.size();
        //cout<<b1<<endl;
        if(a1+b1==m)
        {
        if(a==a1)
        {
            ok=1;
        }
        if(b==b1)
        {
            okk=1;
        }
        if(ok+okk==2)
        {
            oh=(ok+okk)/2;
        }}
        else{oh=0;}
        k=0;
        w=0;


        reverse(bb, bb+m);
        /*vector<int>:: iterator we;
        for(we=mm.begin();we!=mm.end();we++)
        {
            cout<<*we<<" ";
        }*/
        /*for(int j=0;j<m;j++)
        {
            cout<<bb[j]<<" ";
        }*/
        //cout<<endl;
        rr.clear();

        for(k=0; k<m; k++)
        {
            aa[bb[k]]++;
            if(aa[bb[k]]>=2)
            {
                 //cout<<bb[k]<<k<<endl;
                break;
            }

            else
            {
                rr.insert(bb[k]);
            }
        }
        ss.clear();
        for(w=k; w<m; ++w)
        {
            ss.insert(bb[w]);
        }
        for(int j1=0;j1<m;j1++)
        {
            aa[j1]=0;
        }
        c=*--rr.end();
        //cout<<c<<endl;
        d=*--ss.end();
        //cout<<d<<endl;
        c1=rr.size();
        //cout<<c1<<endl;
        d1=ss.size();
        //cout<<d1<<endl;
        if(c1+d1==m)
        {
        if(c==c1)
        {
            ok1=1;
        }
        if(d==d1)
        {
            okk1=1;
        }
        if(ok1+okk1==2)
        {
            ohh=(ok1+okk1)/2;
        }}
        else{ohh=0;}
        if(oh==1&&ohh==1)
        {
            if(a1==m-c1){ohh=0;}
        }
        //cout<<oh<<ohh<<endl;

        okay=oh+ohh;
        cout<<okay<<endl;
        if(oh==1)
        {
            cout<<a1<<" "<<b1<<endl;
        }
        if(ohh==1)
        {
            cout<<m-c1<<" "<<m-d1<<endl;
        }
        a=0;
        b=0;
        a1=0;
        b1=0;
        c=0;
        d=0;
        c1=0;
        d1=0;
        k=0;
        w=0;
        ok=0;
        ok1=0;
        okk=0;
        okk1=0;
        okay=0;
        oh=0;
        ohh=0;

    }
}
