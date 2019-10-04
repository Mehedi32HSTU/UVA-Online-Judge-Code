#include<iostream>
#include<cstdio>
#include<cmath>
#include<math.h>
#include<cstring>
#include<string>
using namespace std;
double factorial(double n)
{
    double x,r=1;
    for(x=2;x<=n;x++)
    {
        r*=x;
    }
    return r;
}
int main()
{
    double N,M;
    while(cin>>N>>M)
    {
       if(N==0&&M==0) break;
       double r=(factorial(N)/(factorial(N-M)*factorial(M)));
       printf("%.0lf things taken %.0lf at a time is %.0lf exactly.\n",N,M,r);
    }
    return 0;
}
