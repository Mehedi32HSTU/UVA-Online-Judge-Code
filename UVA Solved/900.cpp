#include<bits/stdc++.h>
#define sc scanf
#define pf printf
#define ll long long
using namespace std;
ll fib[55];
void setfib()
{
    fib[1]=1;
    fib[2]=2;
    for(int i=3;i<=50;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }
}
int main()
{
    setfib();
    int n;
    while(sc("%d",&n)==1)
    {
        if(n==0) break;
        pf("%lld\n",fib[n]);

    }
    return 0;
}
