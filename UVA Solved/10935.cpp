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
        cout<<"Discarded cards:";
        while(qu.size()>1)
        {
            cout<<' '<<qu.front();
            qu.pop();
            x=qu.front();
            qu.pop();
            qu.push(x);
            if(qu.size()>1) cout<<',';
        }
        cout<<"\nRemaining card: "<<qu.front()<<endl;
    }
    return 0;
}

