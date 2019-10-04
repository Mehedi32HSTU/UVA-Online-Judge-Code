#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;
int main()
{
    long long a,b;
    while(scanf("%lld%lld",&a,&b)==2)
    {
       float t_count=0,count=0; long long num;
       float percentage;
       for(int i=a;i<=b;i++)
       {
          t_count++;
          num=i*i+i+41;
          int ck=0;
          for(int x=2;x<=num/2;x++)
          {
              if(num%x==0){ ck=1; break;}

          }
          if(ck==0) count++;
       }
       percentage= float(count/t_count)*100;
       printf("%.2f\n",percentage);

    }
    return 0;
}
