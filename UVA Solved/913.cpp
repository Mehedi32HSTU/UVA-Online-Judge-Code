#include<bits/stdc++.h>
#define sc scanf
#define pf printf
#define ll long long
using namespace std;
int main()
{
    ll n;
    while(sc("%lld",&n)==1)
    {
        ll sum=((n*(n+2))/2)*3-6;
        pf("%lld\n",sum);
    }
    return 0;
}
