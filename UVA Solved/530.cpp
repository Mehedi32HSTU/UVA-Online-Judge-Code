#include<iostream>
#include<cstdio>
using namespace std;
typedef long long ll;
ll nCr(ll n,ll r)
{
    ll i,ans=1;
    r=min(r,n-r);
    for(i=1;i<=r;i++)
    {
        ans*=(n-r+i);
        ans/=i;
    }
    return ans;
}
int main()
{
    ll n,k; while(scanf("%lld%lld",&n,&k)!=EOF)
    {
        if(n==0&&k==0) break;
        printf("%lld\n",nCr(n,k));
    }
    return 0;
}

