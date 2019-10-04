#include<algorithm>
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int T; cin>>T;
    for(int t=1;t<=T;t++)
    {
        int n,maximum=0,x; cin>>n;
        while(n--)
        {
            cin>>x;
            if(maximum<x) maximum=x;
        }
        printf("Case %d: %d\n",t,maximum);

    }
    return 0;
}

