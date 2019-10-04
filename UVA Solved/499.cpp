#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string s;
    while(getline(cin,s))
    {
        map<char,ll>mp;
        ll count=0,sz=s.size();
        for(int i=0;i<sz;i++)
        {
            if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
            mp[s[i]]++;
            if(count<mp[s[i]]) count=mp[s[i]];
        }
        map<char,ll>::iterator it;
        for(it=mp.begin();it!=mp.end();it++)
        {
            if(it->second==count) cout<<it->first;
        }
        cout<<" "<<count<<endl;
    }
    return 0;
}
