#include<bits/stdc++.h>
using namespace std;
int arr[500005];
void setvalue()
{
    arr[1]=1; arr[2]=2;
    int next=2;
    for(int i=3;i<=500000;i++)
    {
        if(i<next) next=2;
        arr[i]=next;
        next+=2;
    }
}

int main()
{
    setvalue();
    int n;
    while(scanf("%d",&n)==1)
    {
        if(n==0) break;
        printf("%d\n",arr[n]);
    }
    return 0;
}
