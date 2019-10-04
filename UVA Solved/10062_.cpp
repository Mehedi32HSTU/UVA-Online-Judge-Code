#include<bits/stdc++.h>
using namespace std;
#define sc scanf
#define pf printf
struct data
{
    char ascii; int val;
};

bool comp(data i,data j)
{
    if(i.val==j.val) return i.ascii>j.ascii;
    return i.val<j.val;
}

int main()
{
    string s;
    int t=0;
    while(getline(cin,s))
    {
        data num[1010];
        if(t!=0) pf("\n");
        t=1;
        map<char,int>mp;
        int sz=s.size();
        for(int i=0;i<sz;i++)
        {
            mp[s[i]]++;
        }
        map<char,int>::iterator it;
        int j=0;
        for(it=mp.begin();it!=mp.end();it++)
        {
            char ch=it->first;
            int x=it->second;
            num[j].ascii=ch;
            num[j].val=x;
            j++;
        }
        sort(num,num+j,comp);
        for(int i=0;i<j;i++) pf("%d %d\n",num[i].ascii,num[i].val);
        ///pf("\n");
    }
    return 0;
}
