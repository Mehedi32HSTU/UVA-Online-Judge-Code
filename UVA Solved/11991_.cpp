#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
///#define long long int ll
vector<ll>v[1000000];

int main()
{
    ll n,m;
    while(scanf("%lld%lld",&n,&m)!=EOF)
    {
        ll x,y;
        ///vector<ll>v[1000000];
        for(int i=1;i<=n;i++)
        {
            scanf("%lld",&x);
            v[x].push_back(i);
        }
        for(int i=1;i<=m;i++)
        {
            scanf("%lld%lld",&x,&y);
            if(v[y].size()<x) cout<<0<<endl;
            else
            {
                cout<<v[y][x-1]<<endl;
            }
        }
    }
    return 0;
}

