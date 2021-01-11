#include<iostream>
#include<cstring>
using namespace std;
/**
int main()
{
    int b,i,j,k,l,m,n,p,q,r;
    string a[90009],t[90009],s[90009];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s[i];
    }
    cin>>q;

    for(j=0;j<q;j++)
    {r=0;
        cin>>t[j];
        for(i=0;i<n;i++)
        {
            p=-1;
            p=s[i].find (t[j]);
            if(p>=0)
            {
                m=i;
                r++;
            }

        }
        //cout<<p<<endl;
    if(r==0)
    {
        cout<<r<<" - "<<endl;
    }
    else{cout<<r<<" "<<s[m]<<endl;}}*/
        #include<map>                       /**working with map...ekta key element thake r ekta mapped element.  key element set kore oi pos e mapped element rakhte hoy*/
        map<string , string> a;
    map<string , int>b;
    string s,g,p;//globally declaring. still donno why
    int main()
    {
        int n,q;
        cin>>n;//parent string inputting
        for(int i=0;i<n;i++)
        {
            cin>>s;
            int l=s.length();//count length
            for(int j=0;j<l;j++)
            {
                for(int k=1;j+k<=l;k++)
                {
                    string c=s.substr(j,k);//checking if c is a sub string of s up to the setup.
                    if(a[c]!=s)//if the key element of a...is not equal to the parent string then its a sub.
                    {
                        b[c]++;//counter and printed as mapped element.
                        a[c]=s;//s er jei sub ta hochhe oita nichhi.(check again or ask someone)                    }
                }
            }
        }//the rest simple.
        cin>>q;
        for(int h=0;h<q;h++)
        {
            cin>>p;
            if(b[p]==0)
            {
                cout<<b[p]<<" "<<"-"<<endl;

            }
            else{cout<<b[p]<<" "<<a[p]<<endl;
        }
    }
return 0;
}
