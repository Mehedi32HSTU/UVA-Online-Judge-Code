#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<math.h>
#include<cmath>
#include<vector>
#include<algorithm>
#include<cstdlib>
using namespace std;
int main()
{
    int n, a[3002],b[3002];
    while(scanf("%d",&n)==1)
    {
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int ck=0;
        if(n>1)
        {
            int i;
            for(i=0; i<n-1; i++)
            {
                b[i]=abs(a[i+1]-a[i]);
            }
            sort(b,b+i);
            for(int j=0; j<n-1; j++)
            {
                if(b[j]!=j+1)
                {
                    ck=1;
                    break;
                }
            }

        }
        if(ck==0) printf("Jolly\n");
        else printf("Not jolly\n");
    }
    return 0;
}
