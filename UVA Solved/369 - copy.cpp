#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll nCr(int n, int m)
{
    ll ans=1;
    m=min(m,n-m);
    for(int i=1;i<=m;i++)
    {
        ans*=(n-m+i);
        ans/=i;
    }
    return ans;
}


int main()
{
    int n,m;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        if(n==0&&m==0) break;
        printf("%d things taken %d at a time is %lld exactly.\n",n,m,nCr(n,m));
    }
    return 0;
}
