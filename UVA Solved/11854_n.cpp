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
    int a,b,c; while(cin>>a>>b>>c)
    {
        if(a==0&&b==0&&c==0) break;
        if(a>c) swap(a,c);
        if(b>c) swap(b,c);
        if(a*a+b*b==c*c) cout<<"right"<<endl;
        else cout<<"wrong"<<endl;


    }
    return 0;
}

