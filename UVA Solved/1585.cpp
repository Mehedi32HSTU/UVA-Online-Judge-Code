#include<bits/stdc++.h>
using namespace std;
#define sc scanf
#define pf printf
#define ll long long
int main()
{
    int n;
    sc("%d",&n);
    while(n--)
    {
        string s;
        cin>>s;
        int sz=s.size(),arr[sz+5],cnt=0;
        ///cout<<sz<<endl;
        if(s[0]=='O') {cnt=1; arr[0]=1;}
        else arr[0]=0;
        for(int i=1;i<sz;i++)
        {
            if(s[i]=='X') arr[i]=0;
            else if(s[i]=='O')
            {
                arr[i]=arr[i-1]+1;
                cnt+=arr[i];
            }
        }
        ///cout<<cnt<<endl;
        pf("%d\n",cnt);
    }
    return 0;
}
