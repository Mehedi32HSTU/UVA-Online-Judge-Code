#include<bits/stdc++.h>
#define sc scanf
#define pf printf
#define ll long long
using namespace std;
ll longserise(ll n)
{
    ll cnt=0;
    while(1)
    {
        if(n&1) n=3*n+1;
        else n/=2;
        cnt++;
        if(n==1) break;
    }
    return cnt;
}

int main()
{
    ll a,b;
    while(sc("%lld%lld",&a,&b)==2)
    {
        if(a==0&&b==0) break;
        if(a>b) { ll temp=a; a=b; b=temp;} ///swap(a,b);
        ll num=0,mx=0,cnt;
        for(ll i=a;i<=b;i++)
        {
            cnt=longserise(i);
            if(cnt>mx){ mx=cnt;num=i;}
        }
        pf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",a,b,num,mx);



    }
    return 0;
}
