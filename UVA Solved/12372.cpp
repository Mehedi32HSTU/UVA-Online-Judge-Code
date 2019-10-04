#include<algorithm>
#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int T,t=0,L,W,H; cin>>T;
    while(T--)
    {
        cin>>L>>W>>H;
        if(L<=20&&H<=20&&W<=20) printf("Case %d: good\n",++t);
        else printf("Case %d: bad\n",++t);
    }
    return 0;
}

