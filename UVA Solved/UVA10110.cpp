#include<iostream>
#include<cstdio>
#include<cmath>
#include<math.h>
#include<cstring>
#include<string>
using namespace std;
int main()
{
    long long num,result;
    while(scanf("%lld",&num)==1)
    {
        if(num==0) break;
        result=sqrt(num);
        if(result*result==num) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}
