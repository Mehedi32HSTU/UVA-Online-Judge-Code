#include<iostream>
#include<cstdio>
#include<cstring>
#include<string.h>
#include<string>
#include<math.h>
#include<cmath>
#include<vector>
#include<algorithm>
#include<cstdlib>
#include<iomanip>
#include<map>
#include<set>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        double t1,t2,d,v,u,ans;
        cin>>d>>v>>u;
        if(v>=u||u==0||v==0){ printf("Case %d: can't determine\n",i); continue;}
        t1=d/u;
        t2=d/sqrt(u*u-v*v);
        ans=fabs(t1-t2);
        cout<<"Case "<<i<<": "<<fixed<<setprecision(3)<<ans<<endl;

    }

    return 0;
}
