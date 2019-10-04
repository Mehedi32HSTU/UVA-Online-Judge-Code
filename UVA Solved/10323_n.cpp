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
double  fact(double n)
{
    if(n==0) return 1;
    return n*fact(n-1);
}
int main()
{
    int n;
    while(cin>>n)
    {
        if(n>=0)
        {
            if(n<=7) cout<<"Underflow!"<<endl;
            else if(n>=14) cout<<"Overflow!"<<endl;
            else
            {
                double ans=fact(n);
                cout<<fixed<<setprecision(0)<<ans<<endl;
            }
        }
        else if(n<0)
        {
            if(n&1) cout<<"Overflow!"<<endl;
            else cout<<"Underflow!"<<endl;
        }

    }
    return 0;
}
