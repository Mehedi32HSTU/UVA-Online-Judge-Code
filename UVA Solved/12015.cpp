
/*************************************************************************************
                         ---------------------------
                   ------Bismillahir-Rahmanir-Rahim------
                         ---------------------------

                    U         U            M           M
                    U         U            M  M     M  M
                    U         U            M     M     M
                    U         U            M           M
                    U         U            M           M
                    U         U   *        M           M     *
                    U         U  * *       M           M    * *
                      U  U  U     *        M           M     *
    -----------------------------------------------------------------------
            //     //   Name: MD: MEHEDI HASAN              //     //
           //     //    Institute: HSTU                    //     //
          //     //     Dept.: CSE                        //     //
         //     //      Email: mehedi1502032@gmail.com   //     //
    -----------------------------------------------------------------------
            ---------- I Love Programming as Gaming ----------
**************************************************************************************/
#include<algorithm>
#include<iostream>
#include <sstream>
#include<iomanip>
#include<cassert>
#include<cstdlib>
#include<cstring>
#include<utility>
#include<sstream>
#include<cctype>
#include<cstdio>
#include<string>
#include<vector>
#include<limits>
#include<queue>
#include<cmath>
#include<stack>
#include<ctime>
#include<list>
#include<map>
#include<set>

using namespace std;

#define loop(a,b,c) for(int a=b;a<c;a++)
#define lloop(a,b,c) for(long long a=b;a<c;a++)
#define rloop(a,b,c) for(int a=c-1;a>=b;a--)
#define rlloop(a,b,c) for(long long a=c-1;a>=b;a--)
#define EPS 1e-9
#define PI acos(-1)
#define rn PI/180
#define TC(t) scanf("%d",&t);while(t--)
#define sf scanf
#define pf printf
#define SIZE 100001
#define sp ' '
#define nl printf("\n")
#define pb push_back
#define pp pop_back
#define mp make_pair
#define ff first
#define ss second
#define gcd(a,b) __gcd(a,b)
#define b_s(v,x) binary_search(v.begin(),v.end(),x)
#define l_b(v,x) lower_bound(v.begin(),v.end(),x)
#define u_b(v,x) upper_bound(v.begin(),v.end(),x)
#define e_r(v,x) equal_range(v.begin(),v.end(),x)

/// ASCII Vlaue....
/// A=65,Z=90,a=97,z=122,0=48,9=57


const int MOD=1000000007;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> vi;
typedef vector<string> vs;
typedef stack<int> si;
typedef stack<string> ss;
typedef queue<int> qi;
typedef queue<string> qs;
typedef pair<int,int> pii;
typedef pair<string,int>psi;

ll nCr(ll aan, ll aar)
{
    ll ii, aac=1;
    for(ii=1; ii<=aar; ii++)
    {
        aac*=(aan-aar+ii);
        aac/=ii;
    }
    return aac;
}

bool status[1100002];
void siv()
{
	int N=1000000;
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

ll big_mod(ll base, ll power, ll mod)
{
    if(power==0) return 1;
    if(power&1)
    {
        ll p1=base%mod;
        ll p2=(big_mod(base, power-1,mod))%mod;
        return (p1*p2)%mod;
    }
    else
    {
        ll p1=(big_mod(base,power/2,mod))%mod;
        return (p1*p1)%mod;
    }
}
ll modInverseBigMod(ll a,ll m)  //a*x=1(mod m)
{
    return big_mod(a,m-2,m);
}

///START YOUR CODE FROM HERE.... Happy Coding.... ! ;)

int main()
{
    string a,b,c,d,e,f,g,h,i,j;
    int x[11],maximum;
    int T; cin>>T;
    for(int t=1;t<=T;t++)
    {
        maximum=0;
        cin>>a>>x[0];cin>>b>>x[1];cin>>c>>x[2];cin>>d>>x[3];cin>>e>>x[4];
        cin>>f>>x[5];cin>>g>>x[6];cin>>h>>x[7];cin>>i>>x[8];cin>>j>>x[9];
        loop(i,0,10){if(maximum<x[i]) maximum=x[i];}
        pf("Case #%d:\n",t);
        if(maximum==x[0]) cout<<a<<endl;
        if(maximum==x[1]) cout<<b<<endl;
        if(maximum==x[2]) cout<<c<<endl;
        if(maximum==x[3]) cout<<d<<endl;
        if(maximum==x[4]) cout<<e<<endl;
        if(maximum==x[5]) cout<<f<<endl;
        if(maximum==x[6]) cout<<g<<endl;
        if(maximum==x[7]) cout<<h<<endl;
        if(maximum==x[8]) cout<<i<<endl;
        if(maximum==x[9]) cout<<j<<endl;
    }
    return 0;
}

