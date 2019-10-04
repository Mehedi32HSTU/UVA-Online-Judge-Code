#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool status[1000007];

void seive()
{
    ll n=1000005,sq;
    ///sq=sqrt(n);
    for(ll i=4;i<=n;i+=2) status[i]=1;
    for(ll i=3;i*i<=n;i+=2)
    {
        if(status[i]==0)
        {
            for(ll j=i*i;j<=n;j+=i) status[j]=1;
        }
    }
    status[0]=status[1]=1;
}

int main()
{
    seive();
    ll n;
    while(scanf("%lld",&n)==1)
    {
        if(n==0) break;
        ll last;
        if(n%2==0) last=n-1;
        else last=n-2;
        if(status[n-2]==0)
        {
            printf("%lld:\n%d+%lld\n",n,2,n-2);
            continue;
        }
        bool ck=true;
        while(n-last<=last)
        {
            if(status[last]==0&&status[n-last]==0)
            {
                printf("%lld:\n%lld+%lld\n",n,n-last,last);
                ck=false;
                break;
            }
            last-=2;
        }
        if(ck) printf("%lld:\nNO WAY!\n",n);
    }
    return 0;
}
