#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    string s;


    while(getline(cin,s))
    {
        int count=0;
        for(int i=0;s[i]!='\0';i++)
        {
           if((s[i]>='A'&&s[i]<='Z'||s[i]>='a'&&s[i]<='z')&&(s[i+1]<'A'||s[i+1]>'Z')&&(s[i+1]<'a'||s[i+1]>'z')) count ++;
        }
        cout<<count<<endl;
    }
    return 0;
}
