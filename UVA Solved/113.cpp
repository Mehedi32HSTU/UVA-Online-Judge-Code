#include<iostream>
#include<cstdio>
#include<cmath>
#include<math.h>
using namespace std;
int main ()
{
    long double p,n;
    while(cin>>n>>p)
    {
        cout<<(int)round(powl(p,(1.0/n)))<<endl;
    }
    return 0;
}

