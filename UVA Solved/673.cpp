#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        string s;
        stack<char>st;
        getline(cin,s);
        if(s.compare("\n")==0)
        {
            printf("Yes\n"); continue;
        }
        int sz=s.size();
        if(sz==1||sz%2!=0)
        {
            printf("No\n"); continue;
        }
        bool ck=true;
        for(int i=0;i<sz;i++)
        {
            if(s[i]=='('||s[i]=='[') st.push(s[i]);
            else if(s[i]==')'&&!st.empty()&&st.top()=='(') st.pop();
            else if(s[i]==']'&&!st.empty()&&st.top()=='[') st.pop();
            else { ck=false; break;}
        }
        if(st.empty()&&ck==true) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
