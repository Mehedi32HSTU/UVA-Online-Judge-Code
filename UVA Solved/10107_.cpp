///In this solution I used insertion sort algorithm. that's why it's faster than previous solution.


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
        ///sort(v.begin(),v.end());
        int sz=v.size();
        for(int i=0;i<sz;i++)
        {
            if(v[i]>n) { ll temp=v[i]; v[i]=v[sz-1]; v[sz-1]=temp; }
        }
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

