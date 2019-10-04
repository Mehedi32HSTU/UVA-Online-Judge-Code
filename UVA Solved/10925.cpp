#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n,f,t=0;
    while(scanf("%d%d",&n,&f)==2)
    {
        if(n==0&&f==0) break;
        t++;
        double x,sum=0,av;
        for(int i=0;i<n;i++)
        {
            scanf("%lf",&x);
            sum+=x;
        }
        av=sum/f;
        printf("Bill #%d costs %.0lf: each friend should pay %.0lf\n\n",t,sum,av);
    }
    return 0;
}
