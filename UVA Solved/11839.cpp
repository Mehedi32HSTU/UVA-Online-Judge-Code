#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m[6],x;
    while(scanf("%d",&n)==1)
    {
        if(n==0) break;

        for(int i=0;i<n;i++)
        {
            int blank=0,cor=0,pos;
            for(int j=0;j<5;j++)
            {
                scanf ("%d",&x);
                if(x<=127) {blank++; pos=j+1;}
                if(x>127) cor++;
            }
            if(blank==1)
            {
                if(pos==1) printf ("A\n");
                else if(pos==2) printf ("B\n");
                else if(pos==3) printf ("C\n");
                else if(pos==4) printf ("D\n");
                else if(pos==5) printf ("E\n");
            }
            else if(blank>1) printf ("*\n");
            else if(blank==0) printf ("*\n");
        }
    }
    return 0;
}
