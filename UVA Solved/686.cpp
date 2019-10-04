#include<bits/stdc++.h>
#define sc scanf
#define pf printf
#define ll long long
using namespace std;
bool sts[100005];
void seive()
{
    ll n=100000;
    for(ll i=4;i<=n;i+=2) sts[i]=1;
    for(ll i=3;i*i<=n;i+=2)
    {
        if(sts[i]==0)
        {
            for(ll j=i*i;j<=n;j+=i) sts[j]=1;
        }
    }
    sts[1]=1;
}
int isprime(ll n)
{
    int cnt=0;
    bool ck[100000]={0};
    for(ll i=2;i<=(n/2)+1;i++)
    {
        if(sts[i]==0&&sts[n-i]==0) {int mn=min(i,n-i); if(ck[mn]==0) {cnt++; ck[mn]=1; }}
    }
    return cnt;
}
int main()
{

    seive();
    ll n; while(sc("%lld",&n)==1)
    {
        if(n==0) break;
        int x=isprime(n);
        cout<<x<<endl;


    }
    return 0;
}

