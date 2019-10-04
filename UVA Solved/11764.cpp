#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T; cin>>T;
    for(int t=1;t<=T;t++)
    {
        int N; cin>>N;
        int h[N]; for(int i=0;i<N;i++) cin>>h[i];
        int h_j=0,l_j=0;
        for(int i=0;i<N-1;i++)
        {
            if(h[i]>h[i+1]) l_j++;
            else if(h[i]<h[i+1]) h_j++;
        }
        printf("Case %d: %d %d\n",t,h_j,l_j);

    }
    return 0;
}
