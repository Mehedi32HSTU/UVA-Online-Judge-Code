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
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        double x;
        cin>>x;
        long long a=(-1+sqrt(1+8*x))/2;
        cout<<a<<endl;
    }

    return 0;
}
