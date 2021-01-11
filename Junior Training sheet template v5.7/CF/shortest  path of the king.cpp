#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll  i,j,k,l,m,n,x,y;
    char a[3],b[3],xx,yy;
    scanf("%s",&a);
    scanf("%s",&b);
    i=(a[0]-b[0]);//cout<<i<<endl;
    j=(a[1]-b[1]);//cout<<j<<endl;
    x=i<0?i=-i,82:76; //means ami b5 h1 case er jonno i -6 r j 4 pai. So ultimately  er jonno 82 verdict e jay that is R r y er khetre verdict wrong so it goes D
    y=j<0?j=-j,85:68;
// ei portion e amr i j duitai 6 r 4 hoye jacche.
    //cout<<i<<" "<<j<<" "<<k<<" "<<l<<" "<<m;
    printf("%lld\n",i>j?i:j);// i print the highest val.
    while(i|j)//i j duitatei jotokhn value thakbe totkhn loop continue jabe
    {
        if(i){i--;xx=x;cout<<xx;}//coverting the x and y int to simple char xx yy. didn't use printf ...jodikortam amk %c diye access dite hoito r jodi %d ditam taile abr x er int value e xx e jaito(within the signed or unsigned range). cout by default char er %c form print kore.
        if(j){j--;yy=y;cout<<yy;}
        cout<<endl;
    }

    }

/*char a[3],b[3],c,d,x,y;
int main(){
	gets(a);gets(b);
	x=a[0]-b[0]; printf("%d %c\n",x,x);y=a[1]-b[1];printf("%d %c\n",y,y);//printf("%d %d\n",x ,y);
	c=x<0?x=-x,82:76;//cout<<c<endl;
	printf("%d %c %d %c\n", c ,c,x ,x);//R:L
	d=y<0?y=-y,85:68;//U:D
	//printf("%d %d\n",x ,y);
	printf("%d %c %d %c\n", d ,d,y ,y);
	printf("%d",x>y?x:y);
		//printf("%d %d\n",x ,y);

	while(x|y){
		puts("");
		if(x)x--,putchar(c);printf("%d\n",x);
		if(y)y--,putchar(d);printf("%d\n",y);
	}
	return 0;
}*/
