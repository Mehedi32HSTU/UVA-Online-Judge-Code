#include<bits/stdc++.h>
#define sc scanf
#define pf printf
#define ll long long
using namespace std;
int main()
{
    int T,t=0; sc("%d",&T);
    while(T--)
    {
        t++; string s,str; int n,x,D,d=0; sc("%d",&n); getchar();
        map<string,int>mp;
        while(n--)
        {
            cin>>s>>x; mp[s]=x;
        }
        sc("%d",&D); getchar();
        cin>>str;
        if(mp.find(str)==mp.end()) pf("Case %d: Do your own homework!\n",t);
        else if(mp[str]<=D) pf("Case %d: Yesss\n",t);
        else if(mp[str]<=D+5) pf("Case %d: Late\n",t);
        else pf("Case %d: Do your own homework!\n",t);
    }
    return 0;
}
