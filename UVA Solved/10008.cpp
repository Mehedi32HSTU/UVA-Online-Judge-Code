#include<bits/stdc++.h>
#define sc scanf
#define pf printf
#define ll long long
using namespace std;
struct line
{
    char x; int y;
};

bool comp(line m,line n)
{
    if(m.y==n.y) return m.x<n.x;
    return m.y>n.y;
}



int main()
{
    int n;
    string s;
    sc("%d",&n);
    map<char,int>mp;
    getchar();
    while(n--)
    {
        getline(cin,s);
        int sz=s.size();

        for(int i=0;i<sz;i++)
        {
            if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z')) mp[toupper(s[i])]++;
        }
     }
        int len=mp.size();
        line a[len+5];
        map<char,int>::iterator it;
        int j=0;
        for(it=mp.begin();it!=mp.end();it++,j++)
        {
            a[j].x=it->first;
            a[j].y=it->second;
        }
        sort(a,a+len,comp);
        for(int i=0;i<len;i++) cout<<a[i].x<<" "<<a[i].y<<endl;
    return 0;
}
