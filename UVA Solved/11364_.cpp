#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n; scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int l=10100,r=-10000,x;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&x);
            if(x>r) r=x;
            if(x<l) l=x;
            ///cout<<l<<' '<<r<<endl;
        }
        ///cout<<l<<' '<<r<<endl;
        printf("%d\n",(2*(r-l)));
    }
    return 0;
}

