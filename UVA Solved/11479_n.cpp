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
    int T; cin>>T;
    for(int t=1;t<=T;t++)
    {
        long long a,b,c; cin>>a>>b>>c;
        if(a<0||b<0||c<0) printf("Case %d: Invalid\n",t);
        else if(a+b<=c||a+c<=b||b+c<=a) printf("Case %d: Invalid\n",t);
        else if(a==b&&b==c) printf("Case %d: Equilateral\n",t);
        else if(a==b||a==c||b==c) printf("Case %d: Isosceles\n",t);
        else if(a!=b&&a!=c&&b!=c) printf("Case %d: Scalene\n",t);

    }
    return 0;
}

