#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t;

    cin>>t;
    for(int i=1;i<=t;i++)
    {
        unsigned long long a,b;
        cin>>a>>b;
        if(a>b) cout<<">"<<endl;
        else if(a<b) cout<<"<"<<endl;
        else if(a==b) cout<<"="<<endl;
    }

    return 0;
}
