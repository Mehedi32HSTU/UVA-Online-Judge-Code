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
int  total(int n, int e)
{
    if(n==0) return 0;
    return n+total((n+e)/3,(n+e)%3);

}
int main()
{
    int n; while(cin>>n)
    {
        if(n%2==1) cout<<total(n,0)<<endl;
        else cout<<total(n,2)<<endl;
    }
    return 0;
}

