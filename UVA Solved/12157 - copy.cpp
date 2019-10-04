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
    int T,c; cin>>T;
    for(c=1;c<=T;c++)
    {
        int a; cin>>a;
        int x[a];
        for(int i=0;i<a;i++) cin>>x[i];
        int mile=0, juice=0;
        for(int i=0;i<a;i++)
        {
            mile+=((x[i]/30)+1)*10;
            juice+=((x[i]/60)+1)*15;
        }
        if(mile<juice) cout<<"Case "<<c<<": "<<"Mile "<<mile<<endl;
        else if(mile>juice) cout<<"Case "<<c<<": "<<"Juice "<<juice<<endl;
        else if(mile==juice) cout<<"Case "<<c<<": "<<"Mile Juice "<<mile<<endl;
    }
    return 0;
}
