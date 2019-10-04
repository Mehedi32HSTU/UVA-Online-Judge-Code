#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sc scanf
#define pf printf
int main()
{
    ll n,m,x;
    while(sc("%lld%lld",&n,&m)==2)
    {
        if(n==0&&m==0) break;
        map<ll,ll>mp;
        for(ll i=0;i<(n+m);i++)
        {
            sc("%lld",&x);
            mp[x]++;
        }
        ll cnt=0;
        map<ll,ll>::iterator it;
        for(it=mp.begin();it!=mp.end();it++)
        {
            if(it->second>1) cnt++;
        }
        pf("%lld\n",cnt);
    }
    return 0;
}
