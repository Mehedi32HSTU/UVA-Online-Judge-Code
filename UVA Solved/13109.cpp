#include<bits/stdc++.h>
using namespace std;
#define sc scanf
#define pf printf
#define ll long long
int main()
{
    int n,m,w; ll W;
    sc("%d",&n);
    while(n--)
    {
        sc("%d%lld",&m,&W);
        int arr[m+5];
        for(int i=0;i<m;i++) sc("%d",&arr[i]);
        ll cnt=0,c=0;
        sort(arr,arr+m);
        for(int i=0;i<m;i++)
        {
            cnt+=arr[i]; c++;
            if(cnt>W){c--; break;}
        }
        pf("%lld\n",c);
    }
    return 0;
}
