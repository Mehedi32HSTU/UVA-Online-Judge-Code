#include<iostream>
#include<cstdio>
#include<cmath>
#include<math.h>
#include<cstring>
#include<string>
using namespace std;
int main()
{
    long long a,b;
    char x[5];
    while(scanf("%lld%s%lld",&a,x,&b)!=EOF)
    {
        if(strcmp(x,"/")==0)
        {
            cout<<a/b<<endl;
        }
        else if(strcmp(x,"%")==0)
        {
            cout<<a%b<<endl;
        }
    }
    return 0;
}
