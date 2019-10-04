#include<bits/stdc++.h>
#define sc scanf
#define pf printf
#define ll long long
using namespace std;
bool prime[100005];
vector<int>prm;
void isprime()
{
    for(int i=4;i<=100000;i+=2) prime[i]=1;
    for(int i=3;i*i<=100000;i+=2)
    {
        if(prime[i]==0)
        {
            for(int j=i*i;j<=100000;j+=i) prime[j]=1;
        }
    }
    prime[1]=prime[0]=1;
}
void setprime()
{
    for(int i=1;i<=100000;i++) if(prime[i]==0) prm.push_back(i);
}



ll divisor(ll i)
{
    ///pr.push_back(0);
    ///for(ll i=2;i<=100000000;i++)
    {
        ll n=i,indx=0,ans=1,pf=prm[0];
        while(pf*pf<=n)
        {
            ll power=0;
            while(n%pf==0){n/=pf; power++;}
            pf=prm[indx++];
            ans*=(power+1);
        }
        if(n!=1) ans*=2;
        return ans;
        ///pr.push_back(ans);
    }
}
int main()
{
    isprime();
    setprime();
    ///divisor();
    int n;
    ll a,b;
    sc("%d",&n);
    while(n--)
    {
        sc("%lld%lld",&a,&b);
        ll mx=0,x=0,pr;
        for(ll i=a;i<=b;i++)
        {
            pr=divisor(i);
            if(pr>mx) { x=i; mx=pr; }
        }
        pf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",a,b,x,mx);
    }
    return 0;
}
