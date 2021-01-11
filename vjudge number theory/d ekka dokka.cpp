#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int x,y=1,w,od,ev;
    cin>>x;
    while(y<=x)
    {
        cin>>w;
        if(w%2!=0)
        {
            cout<<"Case "<<y<<":"<<" "<<"Impossible"<<endl;y++;
        }
    else{
                od=w/2;
        ev=2;
        while(od%2==0)
        {
            od=od/2;
            ev=ev*2;}
            if(od==1)
            {
                cout<<"Case "<<y<<":"<<" "<<"Impossible"<<endl;y++;
            }
            else{cout<<"Case "<<y<<":"<<" "<<od<<" "<<ev<<endl;y++;}}
        }





    return 0;
}
