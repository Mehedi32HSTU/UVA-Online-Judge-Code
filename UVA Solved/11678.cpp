#include<bits/stdc++.h>
using namespace std;
#define b_s(v,x) binary_search(v.begin(),v.end(),x)
int main()
{
    int a,b,x;
    while(scanf("%d%d",&a,&b)==2)
    {
        if(a==0&&b==0) break;
        vector<int>al,bt;
        int als=0,btt=0;
        for(int i=0;i<a;i++) { scanf("%d",&x); al.push_back(x); }
        for(int i=0;i<b;i++) { scanf("%d",&x); bt.push_back(x); }
        if(b_s(bt,al[0])==0) als++;
        if(b_s(al,bt[0])==0) btt++;
        for(int i=1;i<a;i++)
        {
            if(al[i]==al[i-1]) continue;
            if(b_s(bt,al[i])==0) als++;
        }
        for(int i=1;i<b;i++)
        {
            if(bt[i]==bt[i-1]) continue;
            if(b_s(al,bt[i])==0) btt++;
        }
        ///cout<<"als= "<<als<<" btt= "<<btt<<endl;
        printf("%d\n",min(als,btt));
    }
    return 0;
}
