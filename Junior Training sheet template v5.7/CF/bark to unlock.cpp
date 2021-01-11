#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int a,u=0,v=0,x=0,y=0;
    string b,c;
    cin>>b>>a;
    for(int i=0;i<a;i++)
    {
        cin>>c;
        if(c==b)
        {
           y=x=1;
        }
        if(c[0]==b[1])x=1;
        if(c[1]==b[0])y=1;}
      //  if(b[0]==c[1])u++;
        //if(b[1]==c[0])v++;
        //if(u>0&&v>0)
        cout<<(x&&y ? "YES" : "NO")<<endl;/**didn't get this && operation*/

}
/**#include<bits/stdc++.h>
using namespace std;
main()
{
    int c,x=0,y=0,i;
    string a,b;
    cin>>a>>c;
    for(i=0;i<c;i++)
        {
            cin>>b;
    if(b==a||b[1]==a[0]&b[0]==a[1]){cout<<"YES";return 0;}
    if(a[0]==b[1])x++;if(a[1]==b[0])y++;if(x>0&y>0){cout<<"YES";return 0;}}
    cout<<"NO";}
*/
/**#include <iostream>
using namespace std;
int n, v0, v1;
string a, b;
int main() {
	cin>>a>>n;
	while(n--) {
		cin>>b;
		if(b==a) v0 = v1 = 1;
		if(b[1]==a[0]) v0 = 1;
		if(b[0]==a[1]) v1 = 1;
	}
	cout<<(v0&&v1 ? "YES" : "NO");
	return 0;
}

*/
