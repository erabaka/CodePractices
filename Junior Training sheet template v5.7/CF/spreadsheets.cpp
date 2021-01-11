#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100],ss[100],sss[100],ss2[100],s2[100],ey[1001];
    int n,a,sas,hulu,b=0,c,d,g,h,y,i,j,k,x,ye,l,m=0,v,w,z,sa[100];
    cin>>n;
    while (n--)
    {
        cin>>s;
        ye=0;
        ye=strlen(s);
        if(s[1]>='0'&&s[1]<='9')
        {
            sas=0;
            for(hulu=2; hulu<ye; hulu++)
            {
                if(s[hulu]>='0'&&s[hulu]<='9')
                {
                    sas=0;
                }
                else
                {
                    sas=1;
                    break;
                }
            }
        }
        else
        {
            sas=0;
        }


        if(sas==0)
        {
            a=strlen(s);
            for(i=0; i<a; i++)
            {
                if(s[i]>='0'&&s[i]<='9')
                {
                    break;
                }
                else
                {
                    sss[b++]=s[i];
                }

            }
            //cout<<b<<endl;
            for(x=0,y=b-1; x<b,y>=0; x++,y--)
            {
                m+=((sss[x]-65)+1)*pow(26,y);
            }
            //m=m+1;
            //cout<<m<<endl;
            while(m!=0)
            {
                s2[j]=(m%10)+48;
                j++;
                m=m/10;
            }
            s2[j]='\0';
            strrev(s2);
            //for(i=0;i<j;i++)
            //{
            //  cout<<s2[i];
            //}
            for(i=a-1;; i--)
            {
                if(s[i]>='A'&&s[i]<='Z')
                {
                    break;
                }
                else
                {
                    ss2[v++]=s[i];
                }
            }
            ss2[v]='\0';
            strrev(ss2);
//for(i=0;i<v;i++)
            //         {
            //           cout<<ss2[i];
            //}
            ey[0]='R';
            for(i=1,k=0; k<v; i++,k++)
            {
                ey[i]=ss2[k];
            }
            // cout<<i<<endl;
            ey[i]='C';
            for(l=i+1,w=0; w<j; l++,w++)
            {
                ey[l]=s2[w];
            }
            //cout<<l<<endl;
            x=l;//cout<<x;
            ey[l]='\0';
            for(y=0; y<x; y++)
            {
                cout<<ey[y];
            }
            cout<<endl;
            a=0,b=0,c=0,d=0,g=0,h=0,y=0,i=0,j=0,k=0,x=0,l=0,m=0,v=0,w=0,z=0;

        }

       else if(sas==1)
        {
            a=strlen(s);

            for(i=2; i<=a; i++)
            {
                if(s[i]=='C')
                {
                    c=i+1;
                    g=c+1;
                    h=a-g;
                    //cout<<c<<g<<endl;
                    for(d=c,j=h; d<=a,j>=0; d++,j--)
                    {

                        m+=(s[d]-48)*(pow(10,j));
                    }
                    for(l=0; m>0; l++)
                    {
                        k=m%26;
                        m=m/26;
                        if(k==0)
                        {
                            k=26;
                            m--;
                        }
                        // cout<<k<<endl;
                        sa[l]= 'A'+ k-1;
                        ss[l]=sa[l];
                        // cout<<ss[l];
                    }
                    //cout<<l<<endl;
                    ss[l]='\0';
                    //cout<<endl;
                    strrev(ss);
                }
            }
            w=strlen(ss);//cout<<w<<endl;
            for(y=1,x=w; y<c-1; x++,y++)
            {

                ss[x]=s[y];
                //cout<<ss[x]<<s[y]<<" ";//cout<<x;
            }
            //cout<<x<<endl;
            ss[x]='\0';


            v=strlen(ss);//cout<<v<<endl;
            for( z=0; z<v; z++)
            {
                cout<<ss[z];
            }
            cout<<endl;
                    a=0,b=0,c=0,d=0,g=0,h=0,y=0,i=0,j=0,k=0,x=0,l=0,m=0,v=0,w=0,z=0;

        }

    }

}

