#include<bits/stdc++.h>
using namespace std;
#define sc scanf
#define pf printf
int main()
{
    int course,catagori;
    while(sc("%d",&course)==1)
    {
        if(course==0) break;
        sc("%d",&catagori);
        int crs[course+5];
        ///getchar();
        int s;
        for(int i=0;i<course;i++)
        {
            sc("%d",&crs[i]);
        }
        ///bool ck=false;
        int num,least;
        int c=0;
        bool ck[102]={0};
        while(catagori--)
        {
            sc("%d%d",&num,&least);
            ///getchar();

            int cnt=0;
            for(int j=0;j<num;j++)
            {
                ///getchar();
                sc("%d",&s);
                ///cout<<" gjhdsgfhfhgf "<<endl;
                for(int i=0;i<course;i++)
                {
                    if(s==crs[i]) {cnt++; break;}
                }
                ///cout<<count<<endl;
            }
            ///cout<<"c= "<<cnt<<" l= "<<least<<endl;
            if(cnt>=least) ck[c]=1;
            else ck[c]=0;
            c++;
        }
        bool cck=true;
        for(int i=0;i<c;i++){
        if(ck[i]!=1) {cck=false; break;}
        }
        if(cck) pf("yes\n");
        else if(cck==false) pf("no\n");
    }
    return 0;
}
