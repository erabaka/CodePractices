/*
#include <stdio.h>
#include <string.h>
int main()
{
    int tst, i, j, k, dgt,cnt;
    char dcml[50], bnry[50];
    scanf("%d", &tst);
    for(i=1; i<=tst; i++)
    {
        int ara1[4], ara2[4];
        for(k=0; k<4; k++)
            ara1[k]=ara2[k]=0;
        scanf("%s", dcml);
        scanf("%s", bnry);
        for(j=0, k=0; dcml[j]; j++)
        {
            if(dcml[j]=='.') k++;
            else
            {//printf("%s\n",dcml[j]);
            dgt = dcml[j]-48;
            //printf("%c\n",dcml[j]);
            ara1[k] = ara1[k]*10 + dgt;
            //printf("%d ",ara1[k]);
            }
        }
        for(j=0, k=0; bnry[j]; j++)
        {
            if(bnry[j]=='.') k++;
            else
            {
            dgt = bnry[j]-48;
          //  printf("%c\n",bnry[j]);
            ara2[k] = ara2[k]*2 + dgt;
            printf("%d ",ara2[k]);
            }
        }
        for(j=0, cnt=0; j<4; j++)
        {
            if(ara1[j]==ara2[j])
                cnt++;
        }
        if(cnt==4) printf("Case %d: Yes\n", i);
        else printf("Case %d: No\n", i);

    }
    return 0;
}
*/
#include <stdio.h>
#include <math.h>
int main()
{
    long long int m, n, w;
    long long int tst, i, j, odd, Valid, limit;
    scanf("%lld", &tst);
    for(i=1; i<=tst; i++)
    {
        scanf("%lld", &w);
        limit = w/2;
        Valid = 0;
        odd = 0;
        for(j=2; j <= limit;  j *= 2)
        {
            if(w%j == 0)
                odd = w/j;
            if(odd%2 == 1)
            {
                Valid = 1;
                break;
            }
        }
        if(Valid==1)
            printf("Case %lld: %lld %lld\n", i, odd, j);
        else
            printf("Case %lld: Impossible\n", i);
    }
    return 0;
}
