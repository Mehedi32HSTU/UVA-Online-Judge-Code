#include<iostream>
#include<cstdio>
#include<cstring>
#include<string.h>
#include<string>
#include<math.h>
#include<cmath>
#include<vector>
#include<algorithm>
#include<cstdlib>
using namespace std;
int main()
{
    int i=0;
    char s[10];
    while(scanf("%s",s)!=EOF)
    {
        if(!strcmp(s,"*")) break;
        i++;
        if(!strcmp(s,"Hajj")) cout<<"Case "<<i<<": "<<"Hajj-e-Akbar"<<endl;
        else if(!strcmp(s,"Umrah")) cout<<"Case "<<i<<": "<<"Hajj-e-Asghar"<<endl;
    }
    return 0;
}
