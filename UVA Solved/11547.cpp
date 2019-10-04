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
    while(t--)
    {
        long long n; cin>>n;
        n*=567;n/=9; n+=7492; n*=235; n/=47; n-=498;n/=10;n%=10;
        cout<<abs(n)<<endl;
    }
    return 0;
}

