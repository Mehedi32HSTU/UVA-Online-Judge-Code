#include<iostream>
#include<cstdio>
#include<math.h>
#include<cmath>
using namespace std;
bool status[1000000000];
void store()
{
    unsigned long long N=101000000;
    long long sq=sqrt(N);
        for(long long i=4; i<=N; i+=2) status[i]=1;
            for(long long i=3; i<=sq; i+=2)
            {
                if(status[i]==0)
                {
                    for(long long j=i*i; j<=N; j+=i) status[j]=1;
                }
            }
            status[1]=1;
}
int main()
{
    long long a,b;
    store();
    while(scanf("%lld%lld",&a,&b)==2)
    {
        float t_count=0.0,count=0.0;

        unsigned long long num;

        float percentage;

        for(int i=a; i<=b; i++)
        {

            num=i*i+i+41;
                if(status[num]==0) count++;
        }
        /*t_count=b-a+1;
        count=count*100;
        percentage= (count/t_count);
        printf("%.2f\n",percentage);
        */
        printf("%.2lf\n",(count*100.00/(b - a + 1)) + 1e-9 );

    }
    return 0;
}

