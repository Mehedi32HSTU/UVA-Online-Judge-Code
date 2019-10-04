#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,t=0,n;
    scanf("%d",&T);
    bool newline=false;
    while(T--)
    {
        t++;
        if(newline) printf("\n");
        scanf("%d",&n);
        getchar();
        printf ("Case %d:\n",t);
        for(int i=1;i<=n;i++)
        {
            char s[1000]; gets(s);
            int len=strlen(s);
            bool space=true;
            for(int j=0;j<len;j++)
            {
                if(s[j]==' ')
                {
                    if(space) {printf("%c",s[j]); space=false;}
                }
                else { printf("%c",s[j]); space=true; }
            }
            printf("\n");
        }
        newline=true;
    }
    return 0;
}
