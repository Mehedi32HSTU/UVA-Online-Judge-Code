#include<bits/stdc++.h>
using namespace std;
#define pf printf
int main()
{
    string a="`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    ///string b="~!@#$";b+='%';b+="^&*()_+QWERTYUIOP{}|ASDFGHJKL:";b+='"';b+="ZXCVBNM<>?";
    string b="~!@#$%^&*()_+QWERTYUIOP{}|ASDFGHJKL:\"ZXCVBNM<>?";
    string arev="`123qjlmfp/[]456.orsuyb;=\\789aehtdck-0zx,inwvg'";
    string brev="~!@#QJLMFP?{}$%^>ORSUYB:+|&*(AEHTDCK_)ZX<INWVG\"";
    string s;
    while(getline(cin,s))
    {
        int l=s.size(),l1=a.size(),l2=b.size(),j=0;
        ///cout<<l<<' '<<l1<<' '<<l2<<endl;
        while(l!=0)
        {
            if(s[j]==' '){ pf("%c",s[j]); l--;j++;}
            for(int i=0;i<l1;i++)
            {
                if(s[j]==a[i]) { pf("%c",arev[i]); l--;j++;}
            }
            for(int i=0;i<l2;i++)
            {
                if(s[j]==b[i]) { pf("%c",brev[i]); l--;j++;}
            }
        }
        pf("\n");
    }
    return 0;
}
