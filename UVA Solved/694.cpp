#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a,l;
    int t=0;
    while(scanf("%lld%lld",&a,&l)==2)
    {
        if(a<0&&l<0) break;
        t++;
        ll count=0,x=a;
        while(1)
        {
            count++;
            if(a==1) break;
            if(a&1) a=a*3+1;
            else a=a/2;

            if(a>l) break ;
        }
        printf("Case %d: A = %lld, limit = %lld, number of terms = %lld\n",t,x,l,count);
    }
    return 0;
}
