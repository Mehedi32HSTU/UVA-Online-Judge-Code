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
    int n,a,b,c; cin>>n;
    for(int i=0;i<n;i++){ cin>>a>>b>>c;
    if(a+b>c) cout<<"OK"<<endl;
    else cout<<"Wrong!!"<<endl;}
    return 0;
}

