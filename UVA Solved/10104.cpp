#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<math.h>
#include<cmath>
#include<vector>
#include<algorithm>
#include<cstdlib>
using namespace std;

int extends_euclid(int a,int b,int &x,int &y);

int main()
{
    int a,b,x,y;
    int d;

    while(scanf("%d %d",&a,&b)==2){

        d=extends_euclid(a,b,x,y);

            if (a == b) {
              x = 0;
              y = 1;
            }
            printf("%d %d %d\n",x,y,d);

        }

    return 0;
}

int extends_euclid(int a,int b,int &x,int &y)
{
    int x1,y1,d;

    if(a==0){
    x=0;
    y=1;
    cout<<"b = "<<b<<endl;
    return b;
    }

        d=extends_euclid(b%a,a,x1,y1);
        x=y1-(b/a)*x1;
        y=x1;
        cout<<"D = "<<d<<endl;
        return d;


}
