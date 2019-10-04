#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,f,i,j,k,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&a,&f);
        for(i=0;i<f;i++)
        {
            for(j=1;j<=a;j++)
            {
                for(k=0;k<j;k++)
                {
                    printf("%d",j);
                }
                printf("\n");
            }
            for(j=a-1;j>=1;j--)
            {
                for(k=0;k<j;k++)
                {
                    printf("%d",j);
                }
                printf("\n");
            }
            if(i!=f-1) printf("\n");
        }
        if(t) printf("\n");
    }
    return 0;
}
