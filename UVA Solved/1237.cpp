#include<bits/stdc++.h>
using namespace std;
#define sc scanf
#define pf printf
#define ll long long

struct data
{
    ll L,H;
    char nm[25];
};

int main()
{
    int a=0,t; sc("%d",&t);
    while(t--)
    {
        if(a!=0) pf("\n");
        int d,q,pos,cnt=0; sc("%d",&d);
        ll M;
        data X[d+5];
        for(int i=0;i<d;i++)
        {
            sc("%s %lld %lld",X[i].nm,&X[i].L,&X[i].H);
        }
        sc("%d",&q);
        while(q--)
        {
            sc("%lld",&M);
            cnt=0;
            for(int i=0;i<d;i++)
            {
                if(M>=X[i].L&&M<=X[i].H) {cnt++; pos=i;}
                if(cnt>1) break;
            }
            if(cnt==1) pf("%s\n",X[pos].nm);
            else pf("UNDETERMINED\n");
        }
        a=1;
    }
    return 0;
}
