#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s))
    {
        int count=0;
        bool letter=false;
        int i;
        for(i=0;s[i]!='\0';i++)
        {
            if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')) letter=true;
            else {
                if(letter) count++; letter=false;
            }
        }
        i--;
        if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')) count++;
        cout<<count<<endl;
    }
    return 0;
}

