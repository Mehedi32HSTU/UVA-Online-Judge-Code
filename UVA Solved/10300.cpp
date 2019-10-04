#include<algorithm>
#include<iostream>
using namespace std;


int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        double a,b,c,count=0;
        while(n--)
        {
            cin>>a>>b>>c;
            count+=(((a/b)*c)*b);
        }
        cout<<count<<endl;
    }
    return 0;
}

