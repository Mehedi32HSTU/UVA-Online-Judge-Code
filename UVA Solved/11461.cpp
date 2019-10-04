#include<iostream>
#include<cstdio>
#include<cstring>
#include<string.h>
#include<string>
#include<math.h>
#include<cmath>
#include<vector>
#include<algorithm>
#include<cstdlib>
#include<iomanip>
#include<map>
#include<set>
using namespace std;
int main()
{
    int a,b;while(cin>>a>>b)
    {
        if(a==0&&b==0) break;
        int count=0, m,n;
        double x,y;
        x=sqrt(a); m=(x);
        y=sqrt(b); n=(y);
        count=(n-m);
        if(m==x) count++;
        cout<<count<<endl;
    }
    return 0;
}

