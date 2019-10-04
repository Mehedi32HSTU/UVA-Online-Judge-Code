#include<bits/stdc++.h>
using namespace std;
#define sc scanf
#define pf printf
bool comp(pair<char,int>i,pair<char,int>j)
{
    if(i.second==j.second) return i.first>j.second;
    return i.second<j.second;

}

int main()
{
    string s;
    while(getline(cin,s))
    {
        map<char,int>mp;
        vector<pair<char,int> >pp;
        ///char ch[130];
        int sz=s.size();
        for(int i=0;i<sz;i++)
        {
            mp[s[i]]++;
        }
        map<char,int>::iterator it;
        for(it=mp.begin();it!=mp.end();it++)
        {
            char ch=it->first;
            int x=it->second;
            pp.push_back(pair<char,int>(ch,x));
           /* pp.first=it->first;
            pp.second=it->second;*/
        }
        sort(pp.begin(),pp.end(),comp);
        for(int i=0;i<pp.size();i++)
        {
            pf("%d %d\n",pp[i].first,pp[i].second);
        }
        pf("\n");
    }
    return 0;
}
