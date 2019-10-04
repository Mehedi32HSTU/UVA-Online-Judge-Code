#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<math.h>
#include<cmath>
#include<vector>
#include<algorithm>
#include<cstdlib>
using namespace std;
double func(double a)
{
    double b;
    b=(a*(a+1))/2;
    return b;
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        double x,b;
        cin>>x;
        unsigned long long a;
        a=(int)(sqrt((2*x))-1);
        b=func(a);
        if(b<=x)
        {
            b=func(a+1);
            if(b>x) cout<<a<<endl;
            else cout<<a+1<<endl;
        }
        else if(b>x)
        {
            b=func(a-1);
            if(b<=x) cout<<a<<endl;
            else cout<<a-1<<endl;
        }


    }
    return 0;
}
