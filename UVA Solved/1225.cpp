#include<bits/stdc++.h>
using namespace std;
#define sc scanf
#define pf printf
#define ll long long
int main()
{
    int t; sc("%d",&t);
    while(t--)
    {
        int n,arr[11]={0}; sc("%d",&n);
        string s;
        for(int i=1;i<=n;i++)
        {
            stringstream ss;
            ss<<i;
            s+=ss.str();
        }
        int sz=s.size();
        for(int i=0;i<sz;i++)
        {
            arr[s[i]-48]++;
        }
        for(int i=0;i<10;i++) {pf("%d",arr[i]); if(i<9) pf(" ");} ///cout<<arr[i]<<' ';
        pf("\n");
    }
    return 0;
}
