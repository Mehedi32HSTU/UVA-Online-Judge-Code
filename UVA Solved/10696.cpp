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
    long long  n; while(cin>>n)
    {
        if(n==0) break;
        if(n>=101) cout<<"f91("<<n<<") = "<<n-10<<endl;
        else cout<<"f91("<<n<<") = "<<91<<endl;
    }
    return 0;
}

