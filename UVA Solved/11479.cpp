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
    int T; cin>>T;
    for(int t=1;t<=T;t++)
    {
        long long n[3]; for(int i=0;i<3;i++) cin>>n[i];
        sort(n,n+3);
        if(n[0]<0||n[1]<0||n[2]<0) printf("Case %d: Invalid\n",t);
        else if(n[0]+n[1]<=n[2]) printf("Case %d: Invalid\n",t);
        else if(n[0]==n[1]&&n[0]==n[2]) printf("Case %d: Equilateral\n",t);
        else if((n[0]==n[1]&&n[0]!=n[2])||(n[1]==n[2]&&n[1]!=n[0])||(n[2]==n[1]&&n[2]!=n[0])) printf("Case %d: Isosceles\n",t);
        else if((n[0]!=n[1]&&n[0]!=n[2])||(n[1]!=n[2]&&n[1]!=n[0])||(n[2]!=n[1]&&n[2]!=n[0])) printf("Case %d: Scalene \n",t);
    }
    return 0;
}

