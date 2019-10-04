#include<bits/stdc++.h>
using namespace std;
#define sc scanf
#define pf printf
#define ll long long
int main()
{
    int f,a,b,c,sum=0,temp;
    while(sc("%d%d%d%d",&f,&a,&b,&c)==4)
    {
        if(f==0&&a==0&&b==0&&c==0) break;
        sum=1080;
        temp=f-a;
        if(temp<0) temp+=40;
        sum+=temp*9;
        temp=b-a;
        if(temp<0) temp+=40;
        sum+=temp*9;
        temp=b-c;
        if(temp<0) temp+=40;
        sum+=temp*9;
        pf("%d\n",sum);
    }
    return 0;
}
