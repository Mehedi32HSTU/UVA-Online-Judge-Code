#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<math.h>
#include<string>
#include<cstdlib>
#include<iomanip>
using namespace std;
long double factorial (long double n)
{
    long double r = 1;
    for (long double i = 2; i <= n; i++)
    {
        r *= i;
    }
    return r;
}
int main ()
{
    long double N, M;
    while (cin >> N >> M&&N!=0&&M!=0)
    {
        long double r = (factorial(N))/(factorial(N-M)*factorial(M));
        cout << N << " things taken " << M << " at a time is " << fixed << setprecision(0) << r << " exactly." << endl;
    }
    return 0;
}
