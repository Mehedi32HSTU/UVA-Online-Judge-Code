#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool status[100005];
vector<ll>pr;
void seive()
{
    int N=100000;
    int sq=sqrt(N);
    for(int i=4;i<=N;i+=2) status[i]=1;

    for(int i=3;i<=sq;i+=2)
    {
        if(status[i]==0)
        {
            for(int j=i*i;j<=N;j+=i) status[j]=1;
        }
    }
    status[1]=1;
}
void prime()
{
    for(int i=1;i<=100000;i++) if(status[i]==0) pr.push_back(i);
}

vector<ll> divisorcount(ll n)
{
    int length=pr.size();
    vector<ll>divisor;
    if(n<0){ divisor.push_back(-1); n=-n;}
    for(int i=0;i<length && pr[i]*pr[i]<=n;i++)
    {
        while(n%pr[i]==0)
        {
            n/=pr[i];
            divisor.push_back(pr[i]);
            ///cout<<"p= "<<pr[i]<<' '<<"n= "<<x<<' ';
        }
    }
    if(n!=1) divisor.push_back(n);
    return divisor;
}


int main()
{
    seive();
    prime();
    ll n;
    while(cin>>n)
    {
        if(n==0) break;
        if(n==1) { cout<<n<<" = "<<n<<endl;/*printf("%lld = %lld\n",n,n);*/ continue;}
        vector<ll> ans=divisorcount(n);
        int length=ans.size();
        cout<<n<<" = "<<ans[0];
        ///printf("%lld = %lld\n",n,ans[0]);
        for(int i=1;i<length;i++) cout<<" x "<<ans[i]; ///printf(" x %lld",ans[i]);
        printf("\n");
    }
    return 0;
}
