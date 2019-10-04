#include<bits/stdc++.h>
#define sc scanf
#define pf printf
#define ll long long
using namespace std;
bool sts[10005];
vector<int>pr;
void seive()
{
    int n=10000;
    for(int i=4;i<=n;i+=2) sts[i]=1;
    for(int i=3;i*i<=n;i+=2)
    {
        if(sts[i]==0)
        {
            for(int j=i*i;j<=n;j+=i) sts[j]=1;
        }
    }
    sts[1]=1;
    for(int i=1;i<=n;i++) if(sts[i]==0) pr.push_back(i);
}
int main()
{
    seive();
    int t,n; sc("%d",&t);
    while(t--)
    {
        sc("%d",&n);
        for(int i=0;i<=10000;i++)
        {
            if(pr[i]<=n&&(pr[i]*2>n)) {pf("%d\n",pr[i]); break;}
        }

    }
    return 0;
}
