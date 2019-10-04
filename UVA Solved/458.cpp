#include<bits/stdc++.h>
#define sc scanf
#define pf printf
#define ll long long
using namespace std;
int main()
{
    char s[100005];
    while(gets(s))
    {
        int l=strlen(s);
        for(int i=0;i<l;i++)
        {
            pf("%c",s[i]-7);
        }
        pf("\n");

    }
    return 0;
}
