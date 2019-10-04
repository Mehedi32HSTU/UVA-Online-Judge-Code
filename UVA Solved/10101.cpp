#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    int t=0;
    while(scanf("%lld",&n)==1)
    {
        t++;
        ll kuti,lakh,hajar,shata,dosh;
        printf("%4d.",t);
        if (n==0) { printf(" 0\n"); continue;}
        if(n>=10000000)
        {
            kuti=n/10000000;
            n-=(kuti*10000000);
            ll m=kuti;///fhdgjdjhgjj
            if(m>=10000000)
            {
                ll mkuti=m/10000000;
                m-=(mkuti*10000000);
                if(mkuti) printf(" %lld kuti",mkuti);  ///cout<<' '<<mkuti<<" kuti";

            }
            if(m>=100000)
            {
                ll mlakh=m/100000;
                m-=(mlakh*100000);
                if(mlakh)  printf(" %lld lakh",mlakh); /// cout<<' '<<mlakh<<" lakh";
            }
            if(m>=1000)
            {
                ll mhajar=m/1000;
                m-=(mhajar*1000);
                if(mhajar)  printf(" %lld hajar",mhajar);   ///cout<<' '<<mhajar<<" hajar";
            }
            if(m>=100)
            {
                ll mshata=m/100;
                m-=(mshata*100);
                if(mshata)  printf(" %lld shata",mshata); ///cout<<' '<<mshata<<" shata";
            }
            if(m>=1)
            {
                ll mdosh=m;
                if(mdosh)  printf(" %lld",mdosh);  ///cout<<' '<<mdosh;
            }
             printf(" kuti");   ///cout<<' '<<"kuti";
        }
        if(n>=100000)
        {
            lakh=n/100000;
            n-=(lakh*100000);
            if(lakh)  printf(" %lld lakh",lakh); /// cout<<' '<<lakh<<" lakh";
        }
        if(n>=1000)
        {
            hajar=n/1000;
            n-=(hajar*1000);
            if(hajar)  printf(" %lld hajar",hajar);  ///cout<<' '<<hajar<<" hajar";
        }
        if(n>=100)
        {
            shata=n/100;
            n-=(shata*100);
            if(shata) printf(" %lld shata",shata); /// cout<<' '<<shata<<" shata";
        }
        if(n>=1)
        {
            dosh=n;
            if(dosh)  printf(" %lld",dosh); ///cout<<' '<<dosh;
        }
        printf("\n");   ///cout<<endl;
    }
    return 0;
}
