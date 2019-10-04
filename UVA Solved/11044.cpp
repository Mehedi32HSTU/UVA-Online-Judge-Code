#include<bits/stdc++.h>
using namespace std;
#define sc scanf
#define pf printf
#define ll long long
int main()
{
    ll n,m,t; sc("%lld",&t);
    while(t--)
    {
        sc("%lld%lld",&n,&m);
        ll ans=(n/3)*(m/3);
        ///if(ans&1) ans--;
        pf("%lld\n",ans);
    }
    return 0;
}
