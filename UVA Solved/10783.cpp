#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int j=1;j<=T;j++)
    {
        int a,b,sum=0;
        cin>>a>>b;
        for(int i=a;i<=b;i++)
        {
            if(i%2!=0) sum+=i;
        }
        cout<<"Case "<<j<<": "<<sum<<endl;
    }
    return 0;
}
