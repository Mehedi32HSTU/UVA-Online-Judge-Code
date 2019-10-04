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
using namespace std;
int main()
{
    int n;
    long long res;
    while(cin>>n)
    {
        if(n==0) break;
        res=(n*(n+1)*(2*n+1))/6;
        cout<<res<<endl;
    }
    return 0;
}
