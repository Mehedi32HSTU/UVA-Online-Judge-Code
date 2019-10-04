#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n; scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int arr[n+5],count=0;
        for(int i=0;i<n;i++) scanf("%d",&arr[i]);
        sort(arr,arr+n);
        for(int i=0;i<n-1;i++) count+=(arr[i+1]-arr[i]);
        count*=2;
        printf("%d\n",count);
    }
    return 0;
}
