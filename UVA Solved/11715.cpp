#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,tc=0;
    double u,v,s,t,a,x,y,z;
    while(scanf("%d",&n)==1)
    {
        if(n==0) break;
        tc++;
        scanf("%lf%lf%lf",&x,&y,&z);
        if(n==1)
        {
            u=x;v=y;t=z;
            a=(v-u)/t;
            s=(u*t)+(a*t*t)/2;
            printf("Case %d: %.3lf %.3lf\n",tc,s,a);
        }
        else if(n==2)
        {
            u=x;v=y;a=z;
            t=(v-u)/a;
            s=(u*t)+(a*t*t)/2;
            printf("Case %d: %.3lf %.3lf\n",tc,s,t);
        }
        else if(n==3)
        {
            u=x;a=y;s=z;
            v=sqrt((u*u)+(2*a*s));
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",tc,v,t);
            ///s=(u*t)+(a*t*t)/2;
        }
        else if(n==4)
        {
            v=x;a=y;s=z;
            u=sqrt((v*v)-(2*a*s));
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",tc,u,t);
            ///s=(u*t)+(a*t*t)/2;
        }
    }
    return 0;
}

