#include<bits/stdc++.h>
#define sc scanf
#define pf printf
#define ll long long
using namespace std;
bool sts[1000005];
void seive()
{
    ll n=1000000;
    for(ll i=4;i<=n;i+=2) sts[i]=1;
    for(ll i=3;i*i<=n;i+=2)
    {
        if(sts[i]==0)
        {
            for(ll j=i*i;j<=n;j+=i) sts[j]=1;
        }
    }
    sts[0]=1;
}
void isprime(ll n)
{
    for(ll i=2;i<=(n/2)+1;i++)
    {
        if(sts[i]==0&&sts[n-i]==0) {pf(" %lld + %lld\n",i,n-i); break;}
    }
}
int main()
{

    seive();
    ll n; while(sc("%lld",&n)==1)
    {
        if(n==0) break;
        pf("%lld =",n);
        isprime(n);


    }
    return 0;
}
