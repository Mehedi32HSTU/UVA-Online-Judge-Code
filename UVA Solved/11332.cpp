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
int sum(unsigned long long n)
{
    if(n<=9) return n;
    unsigned long long temp=n;
    int rev=0;
    while(temp!=0)
    {
       rev+=temp%10;
       temp/=10;
    }
    n=rev;
    return sum(n);
}
int main()
{
    unsigned long long n;
    while(cin>>n)
    {
        if(n==0) break;
        int x=sum(n);
        cout<<x<<endl;
    }
    return 0;
}

