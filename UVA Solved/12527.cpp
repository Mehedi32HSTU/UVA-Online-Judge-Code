#include<bits/stdc++.h>
using namespace std;
bool isrepeat(int n)
{
    int arr[12]={0};
    bool ck=true;
    while(n!=0)
    {
        int rem=n%10;
        n/=10;
        arr[rem]++;
    }
    for(int i=0;i<=9;i++)
    {
        if(arr[i]>1) {ck=false; break;}
    }
    if(!ck) return false;
    return true;
}

int main()
{
    int n,m;
    while(scanf("%d%d",&n,&m)==2)
    {
        int count=0;
        for(int i=n;i<=m;i++)
        {
            if(isrepeat(i)) count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
