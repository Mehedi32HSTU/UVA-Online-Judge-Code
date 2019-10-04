#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sc scanf
#define pf printf
char input[1000000+10];
ll cnt;

ll stepcount(ll x0)
{
    sprintf(input,"%lld",x0);
    ll x1=strlen(input);
    cnt++;
    if(x1==x0) return cnt;
    return stepcount(x1);
}

int main()
{
    while(sc("%s",input))
    {
        if(strcmp(input,"END")==0) break;
        if(strcmp(input,"1")==0)
        {
            pf("1\n"); continue;
        }
        cnt=1;
        pf("%lld\n",stepcount(strlen(input)));

    }
    return 0;
}
