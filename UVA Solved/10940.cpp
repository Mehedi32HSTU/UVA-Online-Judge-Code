#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    while(scanf("%d",&n)==1)
    {
        if(n==0) break;
        queue<int>qu;
        for(int i=1;i<=n;i++) qu.push(i);
        while(qu.size()>1)
        {
            qu.pop();
            x=qu.front();
            qu.pop();
            qu.push(x);
        }
        cout<<qu.front()<<endl;

    }
    return 0;
}

