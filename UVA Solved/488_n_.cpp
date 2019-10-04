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
    int t;
    cin>>t;
    while(t--)
    {
        int a,f;
        cin>>a>>f;
        for(int x=0; x<f; x++)
        {
            for(int i=1; i<=a; i++)
            {
                for(int j=1; j<=i; j++)
                {
                    cout<<i;
                }
                cout<<endl;
            }
            for(int i=a-1; i>=1; i--)
            {
                for(int j=1; j<=i; j++)
                {
                    cout<<i;
                }
                cout<<endl;
            }
            if(x<f-1) cout<<endl;
        }
        if(t) cout<<endl;
    }
    return 0;
}

