#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    unsigned int a,b;
    while(scanf("%u%u",&a,&b))
    {
        int d=0;
        if(a==0&&b==0) break;
        int count = 0;
        int r1,r2;
        while(1)
        {
            if(a==0&&b==0) break;
            r1 = a%10;
            a = a/10;
            r2 = b%10;
            b = b/10;
            if((r1+r2+d)>=10)
            {
                d=1;
                count++;
            }
            else d=0;
        }
        if(count==0) cout << "No carry operation."<<endl;
        else if(count==1) cout<<count<<" "<<"carry operation."<<endl;
        else if(count>1) cout<<count<<" "<<"carry operations."<<endl;

    }
    return 0;
}
