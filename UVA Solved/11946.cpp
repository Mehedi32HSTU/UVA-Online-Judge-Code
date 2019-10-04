#include<bits/stdc++.h>
#define sc scanf
#define pf printf
#define ll long long
using namespace std;
int main()
{
    int t; sc("%d",&t);
    char str[10000],ch;
    getchar();
    while(t--)
    {
        while(gets(str)!='\0')
        {
            if(strlen(str)==0) break;
            for(int i=0;i<strlen(str);i++)
            {
            ch=str[i];
            if(ch=='0') pf("O");
            else if(ch=='1') pf("I");
            else if(ch=='2') pf("Z");
            else if(ch=='3') pf("E");
            else if(ch=='4') pf("A");
            else if(ch=='5') pf("S");
            else if(ch=='6') pf("G");
            else if(ch=='7') pf("T");
            else if(ch=='8') pf("B");
            else if(ch=='9') pf("P");
            ///else if(ch=='\\n') {break;}
            else pf("%c",ch);
            }
            pf("\n");
        }
        if(t>0) pf("\n");

    }
    return 0;
}
