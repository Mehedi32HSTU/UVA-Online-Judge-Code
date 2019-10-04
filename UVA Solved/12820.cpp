#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t=0;
    while(scanf("%d",&n)==1)
    {
        t++;
        char s[1000];
        int count=0;
        for(int i=0;i<n;i++)
        {
            scanf("%s",s);
            map<char,int>mp;
            map<int,int>val;
            int l=strlen(s);
            for(int j=0;j<l;j++)
            {
                mp[s[j]]++;
            }
            int m=mp.size();
            bool ck1=false; bool ck2=true;
            if(m>1) ck1=true;
            map<char,int>::iterator it;
            for(it=mp.begin(); it!=mp.end();it++)
            {
                int x=it->second;
                val[x]++;
            }
            map<int,int>::iterator tt;
            for(tt=val.begin(); tt!=val.end();tt++)
            {
                int x=tt->second;
                ///cout<<x<<' ';
                if(x>1) {ck2=false; break;}
            }
            if(ck1 && ck2) count++;
        }
        ///cout<<endl;
        printf("Case %d: %d\n",t,count);

    }
    return 0;
}
