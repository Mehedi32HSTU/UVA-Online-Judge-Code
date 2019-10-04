#include<bits/stdc++.h>
using namespace std;
#define sc scanf
#define pf printf
#define ll long long
int main()
{
    char s1[110],s2[100];
    while(sc("%s",s1)==1)
    {
        sc("%s",s2);
        int arr1[26]={0},arr2[26]={0};
        int sz1=strlen(s1);
        char ch;
        for(int i=0;i<sz1;i++)
        {
            ///cout<<ch<<" ";
            arr1[s1[i]-65]++;
            arr2[s2[i]-65]++;
        }

        sort(arr1,arr1+sizeof(arr1)/sizeof(arr1[0]));
        sort(arr2,arr2+sizeof(arr2)/sizeof(arr2[0]));
        bool ck=true;
        for(int i=0;i<26;i++)
        {
            if(arr1[i]!=arr2[i]) { ck=false;break; }
        }
        if(ck) pf("YES\n");
        else pf("NO\n");
    }
    return 0;
}

