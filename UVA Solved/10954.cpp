#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0) break;
        priority_queue<ll>q;
        ll a,x,b;
        while(n--)
        {
            scanf("%d",&x);
            q.push(-x);
        }
        ll sum=0;
        while(q.size()>1)
        {
            a=q.top();
            q.pop();
            b=q.top();
            q.pop();
            sum+=-a-b;
            q.push(a+b);
            ///cout<<sum<<' ';
        }
        printf("%lld\n",sum);
    }
    return 0;
}
