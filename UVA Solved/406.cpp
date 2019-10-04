#include<bits/stdc++.h>
#define sc scanf
#define pf printf
#define ll long long
using namespace std;
bool sts[10005];
vector<int>pr;
void seive()
{
    for(int i=4;i<=10000;i+=2) sts[i]=1;
    for(int i=3;i*1<=10000;i+=2)
    {
        if(sts[i]==0)
        {
            for(int j=i*i;j<=10000;j+=i) sts[j]=1;
        }
    }
    sts[0]=1;
}
void isprime()
{
    for(int i=0;i<=10000;i++) if(sts[i]==0) pr.push_back(i);
}
int main()
{
    seive();
    isprime();
    int n,c;
    while(sc("%d%d",&n,&c)==2)
    {
        int low,high,mid,cnt=0,tempn=n;
        if(n>1000) n=1000;
        for(int i=0;;i++)
        {
            if(pr[i]>n) break;
            cnt++;
        }
        if(cnt&1)
        {
            low=cnt/2-c+1;
            high=low+2*c-1;
        }
        else
        {
            low=cnt/2-c;
            high=low+2*c;
        }
        if(low<0) low=0;
        if(high>cnt-1) high=cnt;
        pf("%d %d:",tempn,c);
        for(int i=low;i<high;i++)
        {
            pf(" %d",pr[i]);
        }
        pf("\n\n");

    }
    return 0;
}
