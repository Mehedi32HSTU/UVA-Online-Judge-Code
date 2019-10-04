#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    char x=getchar();
    for(int t=0;t<T;t++)
    {
        string st,s;
        getline(cin,s);
        int len=s.size();
        int l=sqrt(len);
        if(l*l!=len) cout<<"INVALID"<<endl;
        else
        {
            for(int i=0;i<l;i++){
                for(int j=i;j<len;j+=l) cout<<s[j];
            }
            cout<<endl;
        }
    }
    return 0;
}
