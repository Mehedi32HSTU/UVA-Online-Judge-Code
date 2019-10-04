#include<iostream>
#include<iomanip>
#include<cstdio>
#include<math.h>
#include<cstdlib>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
long double fact(long double m,long double n)
{
    if(m == n)return 1;

    return (m*fact(m-1,n));
}
long double factorial(long double n)
{

    if(n==1)return 1;
    return(n*factorial(n-1));
}
int main()
{
    long double m,n,x;
    while(cin >> m >> n)
    {

        if(m==0&&n==0) break;
        long double value=factorial(m)/(factorial(m-n)*factorial(n));

        /*x = m-n;
        if(x==0) cout <<m<<" things taken "<<n<<" at a time is "<<1<<" exactly."<<endl;

        else if(x>=n)
        {
            cout <<m<<" things taken "<<n<<" at a time is "<<fixed<<setpricision(0)<<fact(m,x)/factorial(n)<<" exactly."<<endl;

        }
        else*/
            cout <<m<<" things taken "<<n<<" at a time is "<< fixed<< setpricision(0)<< value<<" exactly."<<endl;


    }

    return 0;
}
