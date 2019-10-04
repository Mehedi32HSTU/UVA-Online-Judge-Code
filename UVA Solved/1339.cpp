#include<bits/stdc++.h>
using namespace std;
#define sc scanf
#define pf printf
#define ll long long
int main()
{
    string s1,s2;
    while(cin>>s1)
    {
        cin>>s2;
        map<char,int>mp1,mp2;
        int sz1=s1.size(),sz2=s2.size();
        char ch;
        for(int i=0;i<sz1;i++)
        {
            if(s1[i]=='Z') ch='A';
            else ch=s1[i]-1;
            ///cout<<ch<<" ";
            mp1[ch]++;
        }
        for(int i=0;i<sz2;i++)
        {
            ch=s2[i];
            mp2[ch]++;
        }
        map<char,int>::iterator it1,it2;
        bool ck=true;
        it2=mp2.begin();
        for(it1=mp1.begin();it1!=mp1.end(),it2!=mp2.end();it1++,it2++)
        {
            if(it1->second!=it2->second) {ck=false; break;}
        }
        if(ck) pf("YES\n");
        else pf("NO\n");
    }
    return 0;
}
