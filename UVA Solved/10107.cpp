#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    vector<ll>v;
    while(scanf("%lld",&n)==1)
    {
        v.push_back(n);
        sort(v.begin(),v.end());
        int sz=v.size();
        ll mid;
        if(sz%2==0)
        {
            mid=(v[sz/2]+v[sz/2-1])/2;
        }
        else mid=v[sz/2];
        printf("%lld\n",mid);
    }
    return 0;
}
