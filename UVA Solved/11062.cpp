#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sc scanf
#define pf printf
int main()
{
    char str[5005];
    map<string,int>mp;
    string x,all,s;
    while(gets(str))
    {
        all+=str;
        if(all[all.length()-1]=='-') all.erase(all.begin()+all.length()-1);
        else all+=' ';
    }
    s=all;
        ///char str[205];
        int sz=s.size();
        int i=0;
        /*for(i=0;i<sz;i++)
        {
            if(s[i]>='A'&&s[i]<='Z') s[i]=tolower(s[i]);
            str[i]=s[i];
        }
        str[i]='\0';*/

        for(i=0;i<sz;i++)
        {
            if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||s[i]=='-')
            {
               if(s[i]=='-'&&i!=sz-1)  x+=s[i];
               ///else if(s[i]=='-'&&i!=sz-1)  x+=s[i];
               else {s[i]=tolower(s[i]); x+=s[i];}
            }
            else
            {
                mp[x]++;
                x.clear();
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

