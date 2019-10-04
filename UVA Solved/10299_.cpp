#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool status[100005];
vector<ll>pr;
void seive()
{
    int n=100000;
    int sq=sqrt(n);
    for(int i=4;i<=n;i+=2) status[i]=1;
    for(int i=3;i*i<=n;i+=2)
    {
        if(status[i]==0)
        {
            for(int j=i*i;j<=n;j+=i) status[j]=1;
        }
    }
    status[1]=1;
}
void prime()
{
    for(int i=1;i<=50000;i++)
    {
        if(status[i]==0) pr.push_back(i);
    }
}
ll EulerPhi(ll n)
{
    if(n==1) return 0;
    ll i=0,pf=pr[0],ans=n;
    while(pf*pf<=n)
    {
        if(n%pf==0) ans-=ans/pf;
        while(n%pf==0) n/=pf;
        pf=pr[++i];
    }
    if(n!=1) ans-=ans/n;
    return ans;
}
int main()
{
    seive();
    prime();
    ll n;
    while(scanf("%lld",&n)!=EOF)
    {
        if(n==0) break;
        printf("%lld\n",EulerPhi(n));


    }
    return 0;
}


