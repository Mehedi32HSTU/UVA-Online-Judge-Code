#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long day,month,year,n;
    while(scanf("%lld",&n)==1)
    {
        string name,old,young;
        long long y=2147483647,o=-10;
        while(n--)
        {
            ///scanf("%s %d %d %d",name,&day,&month,&year);
            cin>>name>>day>>month>>year;
            long long td=day+month*31+year*31*12;
            if(o<td)
            {
                ///cout<<"old ";
                o=td;
                old=name;
            }
            else if(y>td)
            {
                ///cout<<"young ";
                y=td;
                young=name;
            }
        }
        ///printf("%s\n%s\n",old,young);
        cout<<old<<endl<<young<<endl;
    }
    return 0;
}
