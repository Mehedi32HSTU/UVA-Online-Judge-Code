
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
    map<char,int>s;
    s['B']=1;s['F']=1;s['P']=1; s['V']=1; s['C']=2;s['G']=2;s['J']=2;s['K']=2;s['Q']=2;s['S']=2;s['X']=2;s['Z']=2;
    s['D']=3;s['T']=3;s['L']=4;s['M']=5;s['N']=5;s['R']=6;s['A']=0;s['E']=0;s['I']=0;s['O']=0;s['U']=0;
    s['H']=0;s['W']=0;s['Y']=0;
    string st;
    while(cin>>st)
    {
        int l=st.size(),ck=-1;
        ///if(s[st[0]]!=0&&s[st[0]]!=s[st[1]]) cout<<s[st[0]];
        loop(i,0,l)
        {
            if(s[st[i]]!=0&&s[st[i]]!=ck) {cout<<s[st[i]]; ck=s[st[i]];}
            else if(s[st[i]]==0) ck=-1;
        }
        ///if(s[st[l-1]]!=0&&st[l-1]!=st[l-2]) cout<<s[st[l-1]];
        nl;
        st.clear();
    }
    return 0;
}

