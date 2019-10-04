#include<bits/stdc++.h>
using namespace std;
#define sc scanf
#define pf printf
#define ll long long

bool issame(string a,string b)
{
    int l=a.size();
    bool ck=true;
    for(int i=0;i<l;i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        {
            if(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u') continue;
            else {ck=false; break;}
        }
        else if(a[i]!=b[i]) {ck=false; break;}
    }
    return ck;
}

int main()
{
    int n; sc("%d",&n);
    while(n--)
    {
        string a,b;
        cin>>a>>b;
        if(a.size()!=b.size()) {pf("No\n"); continue;}
        if(issame(a,b)) pf("Yes\n");
        else pf("No\n");
    }
    return 0;
}
