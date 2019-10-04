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
    int T;
    cin>>T;
    for(int t=1; t<=T; t++)
    {
        double c,d;
        cin>>c>>d;
        c=(9*c)/5+32;
        c=c+d;
        double ans=(5*(c-32))/9;
        printf("Case %d: %.2lf\n",t,ans);
    }
    return 0;
}

