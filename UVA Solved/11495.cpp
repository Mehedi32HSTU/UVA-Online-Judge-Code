#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<math.h>
#include<cmath>
#include<vector>
#include<algorithm>
#include<cstdlib>
using namespace std;
int main()
{
    int N;
    while(cin>>N)
    {
        if(N==0) break;
        int x[N];
        for(int i=0; i<N; i++)
        {
            cin>>x[i];
        }
        int i;
        for(i=0; i<N-1; i++)
        {
            if(x[i]>x[i+1])
            {
                x[i]=x[i]^x[i+1];
                x[i+1]=x[i]^x[i+1];
                x[i]=x[i]^x[i+1];
            }
        }
        for(i=0; i<N; i++)
        {
            cout<<x[i]<<" ";

        }
            cout<<endl;
    }
    return 0;
}
