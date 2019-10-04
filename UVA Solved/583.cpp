#include<bits/stdc++.h>
using namespace std;
vector<int>pr;
///vector<int>ans[110005];
bool status[1100002];
void siv()
{
	int N=110005;
	int sq=sqrt(N);
	for(int i=4;i<=N;i+=2) status[i]=1;
	for(int i=3;i<=sq;i+=2){
		if(status[i]==0)
		{
			for(int j=i*i;j<=N;j+=i) status[j]=1;
		}
	}
	status[1]=1;
}
void prime()
{
    ///siv();
    for(int i=1;i<=110005;i++)
    {
        if(status[i]==0) pr.push_back(i);
    }
}

vector<int> divisorcount(int n)
{
    ///prime();
    int length=pr.size();
    ///cout<<"size of prime is "<<length<<endl;
    vector<int>divisor;
    if(n<0) {divisor.push_back(-1); n=-n;}
    ///for(int n=1;n<=100010;n++)
    {
        int x=n,m=sqrt(2147483648);

        for(int i=0;i<length&&pr[i]<=m;i++)
        {
                while(x%pr[i]==0)
                {
                    x/=pr[i];
                    divisor.push_back(pr[i]);
                }
        }
        if(x!=1) divisor.push_back(x);
    }
    return divisor;
}
/*void anscount()
{

    for(int i=2;i<=100099;i++)
    {
        ans[i]=divisorcount(i);
    }
}*/

int main()
{
    ///anscount();
    siv();
    prime();
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0) break;
        if(n==1){printf("%d = %d\n",n,n); continue;} ///cout<<n<<" = "<<n<<endl; continue;}
        vector<int>ans=divisorcount(n);
        int length=ans.size();
        printf("%d = %d",n,ans[0]);
        ///cout<<n<<" = "<<ans[0];
        for(int i=1;i<length;i++) printf(" x %d",ans[i]);///cout<<" x "<<ans[i];
        printf("\n");  ///cout<<endl;
    }
    return 0;
}
