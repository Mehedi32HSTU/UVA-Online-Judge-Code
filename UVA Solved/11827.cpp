
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
**************************************************************************************/
#include<algorithm>
#include<iostream>
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
#define fff first
#define sss second
#define gcd(a,b) __gcd(a,b)
#define b_s(a,b) binary_search(v.begin(),v.end(),x)
#define l_b(a,b) lower_bound(v.begin(),v.end(),x)
#define u_b(a,b) upper_bound(v.begin(),v.end(),x)
#define e_r(a,b) equal_range(v.begin(),v.end(),x)


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

///START YOUR CODE FROM HERE.... Happy Coding.... ! ;)

int main()
{
    int n; cin>>n;
    getchar();  /// i don't know why i have to use getchar(); fucntion other my program does
                /// not give right output..........
    while(n--)
    {
        int a[100005],gd,m=0,maximum=0;
        string s;
        getline(cin,s);
        ///cout<<s<<endl;
        stringstream ss(s);
        while(ss>>a[m]) m++;
        ///loop(i,0,m)
        ///cout<<"a= "<<a[i]<<sp;
        ///nl;
        loop(i,0,m-1)
        {
            loop(j,i+1,m)
            {
                gd=gcd(a[i],a[j]);
                if(gd>maximum) maximum=gd;
            }
        }
        cout<<maximum<<endl;
    }
    return 0;
}

