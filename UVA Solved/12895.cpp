#include<bits/stdc++.h>
using namespace std;
#define sc scanf
#define pf printf
#define ll long long
int power(int a,int b)
{
    int x=1;
    for(int i=1;i<=b;i++)
    {
        x=x*a;
    }
    return x;
}

int main()
{
    ll n,a,b;
    string s;
    int t; sc("%d",&t);
    while(t--)
    {
        cin>>s;
        stringstream ss(s);
        ss>>n;
        a=n;
        ll ans=0;
        int l=s.length(),rem;
        for(int i=0;i<l;i++)
        {
            while(a!=0)
            {
                rem=a%10;
                ans=ans+power(rem,l);
                a/=10;
                ///cout<<rem<<" "<<ans<<"  ";
            }
        }
        ///cout<<ans<<endl;
        if(ans==n) pf("Armstrong\n");
        else pf("Not Armstrong\n");
    }
    return 0;
}
