#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<cmath>
#include<math.h>
using namespace std;
int main()
{
    int C;
    cin>>C;
    for(int t=1;t<=C;t++)
    {
        int N,count;
        cin>>N;
        float percentag,g[1002],avrg;
        for(int j=0;j<N;j++)
        {
            cin>>g[j];
        }
        int sum=0;
        for(int j=0;j<N;j++)
        {
            sum+=g[j];
        }
        avrg=sum/N;
        count = 0;
        for(int j=0;j<N;j++)
        {
            if(avrg<g[j]) count++;
        }
        percentag=(float)(100*count)/N;
        printf("%.3f%%\n",percentag);

    }
    return 0;
}

