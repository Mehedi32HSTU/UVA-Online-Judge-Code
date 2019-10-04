#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll countrandom(ll z,ll i,ll m,ll l)
{
    map<ll,int>mp;
    ll count=0;
    while(1)
    {
        l=(z*l+i)%m;
        mp[l]++;
        if(mp[l]==2) break;
        count++;
    }
    return count;
}

int main()
{
    ll z,i,m,l,ans,t=0;
    while(scanf("%lld%lld%lld%lld",&z,&i,&m,&l)==4)
    {
        t++;
        if(z==0&&i==0&&m==0&l==0) break;
        ans=countrandom(z,i,m,l);
        printf("Case %lld: %lld\n",t,ans);
        ///cout<<ans<<endl;


    }
    return 0;
}
