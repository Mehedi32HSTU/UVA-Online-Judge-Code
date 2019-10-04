#include<bits/stdc++.h>
using namespace std;
#define sc scanf
#define pf printf
#define pi acos(-1.0)
#define ll long long
int main()
{
    int D,v;
    double d;
    while(sc("%d%d",&D,&v)==2)
    {
        if(D==0&&v==0) break;
        d=pow(D*D*D-6*v/pi,1.0/3);
        pf("%.3lf\n",d);


    }
    return 0;
}
