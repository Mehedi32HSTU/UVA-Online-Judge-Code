#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        getchar();
        string s1,s2;
        map<string, string>mp;
        while(n--)
        {
            getline(cin,s1);
            ///getchar();
            ///cout<<s1<<'  ';
            getline(cin,s2);
            ///cout<<s2<<endl;
            mp[s1]=s2;
        }
        int m; cin>>m;
        getchar();
        while(m--)
        {

            ///cout<<"yes ";
            string x;
            getline(cin,x);
            cout<<mp[x]<<endl;
        }
    }
    return 0;
}
