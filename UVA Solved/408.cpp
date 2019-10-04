#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(b==0) return a;
    return gcd(b,a%b);
}

int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)==2)
    {
        int m=gcd(a,b);
        if(m==1) printf("%10d%10d    Good Choice\n\n",a,b);
        else printf("%10d%10d    Bad Choice\n\n",a,b);
    }
    return 0;
}
