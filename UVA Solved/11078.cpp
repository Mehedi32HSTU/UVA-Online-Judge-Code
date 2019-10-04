#include<bits/stdc++.h>
using namespace std;
#define sc scanf
#define pf printf
#define ll long long
int main()
{
    int n,t;
    sc("%d",&t);
    while(t--)
    {
        sc("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++) sc("%d",&arr[i]);
        int lv,tmp,dfs;
        dfs=arr[0]-arr[1];
        lv=max(arr[0],arr[1]);
        for(int i=2;i<n;i++)
        {
            tmp=lv-arr[i];
            dfs=max(dfs,tmp);
            lv=max(lv,arr[i]);
        }
        cout<<dfs<<endl;
    }
    return 0;
}
