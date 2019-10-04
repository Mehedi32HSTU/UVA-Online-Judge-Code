#include<stdio.h>
long long int func(long long int n);
long long mx(long long x,long long y);
int main()
{
    long long int a,b;
    while(scanf("%lld%lld",&a,&b)==2){
    printf("%lld %lld %lld\n",a,b,mx(a,b));
    }
    return 0;
}
long long int func(long long n)
{
    if(n==1) return 1;
    else if(n&1) return func(3*n+1)+1;
    else return func(n/2)+1;
}
long long int mx(long long x,long long y)
{
    long long max=0,cycle;
    if(y<x) return mx(y,x);

    while(x<=y){
        cycle=func(x);
        if(max<cycle) max=cycle;
        x++;
    }
    return max;
}
