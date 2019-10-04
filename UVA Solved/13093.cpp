#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    while(getline(cin,a))
    {
        getline(cin,b);
        int la=a.size(),lb=b.size();
        string sa,sb;
        sa=a[0],sb=b[0];
        for(int i=1;i<la;i++)
        {
            if(a[i]==' ') sa+=a[i+1];
        }
        for(int i=1;i<lb;i++)
        {
            if(b[i]==' ') sb+=b[i+1];
        }
        if(sa==sb) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}
