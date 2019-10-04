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
    int n,num[100009];
    while(scanf("%d",&n))
    {
        if(n==0) return 0;
        int count=0;
        for(int i=0; i<n; i++) scanf("%d",&num[i]);

        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(i<j&&num[i]>num[j])
                {
                    swap(num[i],num[j]);
                    count++;
                }
            }

        }
        ///for(int i=0;i<n;i++) cout<<num[i]<<' ';

        if(count&1) printf("Marcelo\n");
        else printf("Carlos\n");
    }

    return 0;
}
