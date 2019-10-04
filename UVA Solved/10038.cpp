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
    int a;
    int A[3002],b[3002];
    while(cin>>a)
    {
        int check =1;
        int i;
        for(i=0;i<a;i++)
        {
            scanf("%d",&A[i]);
        }

        for(i=0;i<a-1;i++)
        {
            b[i]=abs(A[i]-A[i+1]);
        }
        sort(b,b+i);
        for(i=0;i<a-1;i++)
        {
           if(b[i]!=i+1)
                {

                    check=0;
                    break;

                }
            }
        if(check==1) printf("Jolly\n");
        if(check==0) printf("Not jolly\n");

    }
    return 0;
}
