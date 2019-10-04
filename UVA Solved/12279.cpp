#include<bits/stdc++.h>
using namespace std;
#define sc scanf
#define pf printf
#define ll long long
int main()
{
    int n,t=0,x;
    while(sc("%d",&n)==1)
    {
        if(n==0) break;
        t++;
        int y=0,no=0;
        for(int i=0;i<n;i++)
        {
            sc("%d",&x);
            if(x==0) y++;
            else no++;
        }
        pf("Case %d: %d\n",t,no-y);

    }
    return 0;
}
