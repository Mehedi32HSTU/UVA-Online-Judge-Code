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
    int T;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if((c<a&&a<b)||(b<a&&a<c)) cout<<"Case "<<i<<": "<<a<<endl;
        else if((a<b&&b<c)||(c<b&&b<a)) cout<<"Case "<<i<<": "<<b<<endl;
        else if((a<c&&c<b)||(b<c&&c<a)) cout<<"Case "<<i<<": "<<c<<endl;
    }
    return 0;
}
