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
    int t; cin>>t;
    for(int i=1;i<=t;i++)
    {
        double C,d; cin>>C>>d;
        double F1=(9*C)/5+32;
        double F=d+F1;
        double c=((F-32)*5)/9;
        printf("Case %d: %.2lf\n",i,c);

    }
    return 0;
}

