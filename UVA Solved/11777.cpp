#include<algorithm>
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int test1,test2,fin,att,c_test[4],t=0,T; cin>>T;
    while(T--)
    {
        cin>>test1>>test2>>fin>>att>>c_test[0]>>c_test[1]>>c_test[2];
        sort(c_test,c_test+3);
        int res=test1+test2+fin+att+(c_test[1]+c_test[2])/2;
        if(res>=90) printf("Case %d: A\n",++t);
        else if(res>=80) printf("Case %d: B\n",++t);
        else if(res>=70) printf("Case %d: C\n",++t);
        else if(res>=60) printf("Case %d: D\n",++t);
        else printf("Case %d: F\n",++t);
    }
    return 0;
}
