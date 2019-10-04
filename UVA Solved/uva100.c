#include<stdio.h>
int main()
{
    long long int x,y,a,b,i,n,max,cycle,t,count;
    while(scanf("%lld%lld",&a,&b)==2){
            x=a;y=b;
        if(a>b){ a=a^b;b=a^b;a=a^b;}
        max=0;
        for(n=a;n<=b;n++){
            t=n;
           count=0;
           while(1){
                count++;
                if(t==1) break;
                if(t&1) t=3*t+1;
                else t=t/2;
            }
            if(max<count) max=count;
        }
        printf("%lld %lld %lld\n",x,y,max);
    }
    return 0;
}
