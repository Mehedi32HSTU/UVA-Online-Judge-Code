#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,t=0; while(scanf("%d",&s)!=EOF)
    {
        t++;
        if(s<0) break;
        int give[20],need[20],x,have=0;
        bool ck[20]={0};
        ///    scanf("%d",&give[0]);
        have=s;
        for(int i=0;i<12;i++) {scanf("%d",&x); give[i]=x;}
        for(int i=0;i<12;i++) {scanf("%d",&need[i]);}
        /*if(need[0]<=s) {ck[0]=true; give[0]-=need[0];}
        else ck[0]=false;*/
        for(int i=0;i<12;i++)
        {
            if(need[i]<=have){ ck[i]=true; have-=need[i]; have+=give[i]; }
            else {ck[i]=false; have+=give[i];}
            ///cout<<i<<" = "<<have<<' ';
        }
        printf("Case %d:\n",t);
        for(int i=0;i<12;i++)
        {
            if(ck[i]) printf("No problem! :D\n");/// cout<<i<<" true\n";
            else printf("No problem. :(\n");  ///cout<<i<<" false\n";
        }
    }
    return 0;
}
