#include<iostream>
#include<cstdio>
#include<cmath>
#include<math.h>
#include<cstring>
#include<string>
using namespace std;
int main()
{
    long double num, N;
    long long n;
    while(cin>>num)
    {
        if(num==0) break;
        N=sqrt(num);
        n=sqrt(num);
        if(N==n) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}
