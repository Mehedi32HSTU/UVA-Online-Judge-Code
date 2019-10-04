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
    int n;
    cin>>n;
    while(n--)
    {
        int L;
        cin>>L;
        int x[L];
        for(int i=0;i<L;i++) cin>>x[i];
        int count=0;
        for(int i=0;i<L-1;i++){
            for(int j=i+1;j<L;j++){
                if(x[i]>x[j])
                {
                    x[i]=x[i]^x[j];
                    x[j]=x[i]^x[j];
                    x[i]=x[i]^x[j];
                    count++;
                }
            }
        }
        cout<<"Optimal train swapping takes "<<count<<" swaps."<<endl;
    }
    return 0;
}
