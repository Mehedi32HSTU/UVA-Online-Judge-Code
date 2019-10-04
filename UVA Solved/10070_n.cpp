#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<math.h>
#include<cmath>
#include<vector>
#include<algorithm>
#include<cstdlib>
using namespace std;
int main()
{
    char n[1000000]; long long m4,m100,m400,m15,m55;
    bool x=0;
    while(cin>>n)
    {
        m4=0;m100=0;m400=0;m15=0;m55=0;
        bool i,j,k;
        i=j=k=0;
        if(x!=0) cout<<endl;
        x=1;
        for(long long i=0;i<strlen(n);i++)
        {
            m4=(m4*10+(n[i]-'0'))%4;
            m100=(m100*10+(n[i]-'0'))%100;
            m400=(m400*10+(n[i]-'0'))%400;
            m15=(m15*10+(n[i]-'0'))%15;
            m55=(m55*10+(n[i]-'0'))%55;
        }
        if((m4==0&&m100!=0)||m400==0)
        {
            cout<<"This is leap year."<<endl;
            i=1;
        }
        if(m15==0)
        {
            cout<<"This is huluculu festival year."<<endl;
            j=1;
        }
        if(m55==0&&i==1)
        {
            cout<<"This is bulukulu festival year."<<endl;
            k=1;
        }
        if(i==0&&j==0&&k==0) cout<<"This is an ordinary year."<<endl;
    }
    return 0;
}
