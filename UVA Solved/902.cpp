#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sc scanf
#define pf printf
int main()
{
    int n;
    while(sc("%d",&n)==1)
    {
        getchar();
        string s; cin>>s;
        int len=s.size(),cnt=0;
        map<string,int>mp;
        for(int i=0;i<len-n+1;i++)
        {
            string ss;
            ss=s.substr(i,n);
            ///cout<<ss<<" ";
            mp[ss]++;
            if(mp[ss]>cnt) cnt=mp[ss];
        }
        map<string,int>::iterator it;
        for(it=mp.begin();it!=mp.end();it++)
        {
            if(it->second==cnt) {cout<<it->first<<endl; break;}
        }
///        cout<<" "<<count<<endl;


    }
    return 0;
}
