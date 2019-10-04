#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sc scanf
#define pf printf
int main()
{
    string s;
    int t=0;
    while(cin>>s)
    {
        t++;
        ll sz=s.size(),n,i,j,mx,mn;
        sc("%lld",&n);
        pf("Case %d:\n",t);
        while(n--)
        {
            sc("%lld%lld",&i,&j);
            bool ck=true;
            if(i>=j) {mx=i; mn=j;} else {mx=j; mn=i;}
            char ch=s[mn];
            for(ll i=mn;i<=mx;i++)
            {
                if(ch!=s[i]) { ck=false; break;}
            }
            if(ck) pf("Yes\n");
            else pf("No\n");
        }


    }
    return 0;
}
