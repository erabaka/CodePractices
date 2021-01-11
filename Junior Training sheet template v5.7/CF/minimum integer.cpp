/**#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
  long long  int q=0,a[99999],l,r,d,x,n,v=0,u=0,p=0;
    cin>>n;
    while(n--)
    {v=0;p=0;
        cin>>l>>r>>d;
        v=l+r;
        p=v;//cout<<u<<endl;
        while(v--)
        {//cout<<v<<" "<<" ";
//cout<<u<<endl<<endl;
if(v%d==0&&v<=p&&v!=0&&v!=l&&v!=r&&(v>r||v<l))
            p=v;
            //if(p<l||p>r)
            //{
            //    q=p;
            //}

        }
        //for(v=0;v<p;v++){
            cout<<p<<endl;}//break;

}
*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int l,r,d;
        cin>>l>>r>>d;
        if(d<l)
            cout<<d<<'\n';
        else
           cout<<((r/d)+1)*d<<'\n';
    }
    return 0;
}
