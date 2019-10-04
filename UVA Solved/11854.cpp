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
#define pi acos(-1.0)
using namespace std;
int main()
{
    int a,b,c;
    while(cin>>a>>b>>c)
    {
        if(a==0&&b==0&&c==0) break;
        double x=acos((a*a+b*b-c*c)/a*b);
        double y=acos((b*b+c*c-a*a)/b*c);
        double z=acos((a*a+c*c-b*b)/a*c);
        x=(180*x)/pi; y=(180*y)/pi; z=(180*z)/pi;
        if(x==90 || y==90||z==90) cout<<"right"<<endl;
        else cout<<"wrong"<<endl;
    }
    return 0;
}

