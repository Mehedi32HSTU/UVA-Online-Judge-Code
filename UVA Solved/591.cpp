#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t=0;
    while(scanf("%d",&n)==1)
    {
        if(n==0) break;
        t++;
        int h[n+5],sum=0,avrg,moves=0;
        for(int i=0;i<n;i++){ scanf("%d",&h[i]); sum+=h[i];}
        avrg=sum/n;
        for(int i=0;i<n;i++)
        {
            if(h[i]>avrg) moves+=(h[i]-avrg);
        }
        printf("Set #%d\n",t);
        printf("The minimum number of moves is %d.\n\n",moves);
    }
    return 0;
}
