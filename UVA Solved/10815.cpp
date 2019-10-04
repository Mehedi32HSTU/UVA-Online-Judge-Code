#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sc scanf
#define pf printf
int main()
{
    string s;
    map<string,int>mp;
    while(getline(cin,s))
    {
        ///char str[205];
        int sz=s.size();
        int i=0;
        /*for(i=0;i<sz;i++)
        {
            if(s[i]>='A'&&s[i]<='Z') s[i]=tolower(s[i]);
            str[i]=s[i];
        }
        str[i]='\0';*/
        string x="";

        for(i=0;i<=sz;i++)
        {
            if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')) { x+=tolower(s[i]);}
            else
            {
                mp[x]++;
                x.clear();
            }
        }
    }
        map<string,int>::iterator it;
        for(it=mp.begin();it!=mp.end();it++)
        {
            if(it->first=="") continue;
            cout<<it->first<<endl;
        }


    return 0;
}
