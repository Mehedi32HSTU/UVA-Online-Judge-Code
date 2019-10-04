#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    unsigned long long num,i,T,add_num;
    cin>>T;
    while(T--){
        cin>>num;
        int count =0;
        while(1)
        {
            count++;
            unsigned long long rev,rev_num,temp;
            temp=num;
            rev=0;
            while(temp!=0)
            {
                rev=rev*10+temp%10;
                temp/=10;
            }
            add_num=rev+num;
            temp=add_num;
            rev=0;
            while(temp!=0)
            {
                rev=rev*10+temp%10;
                temp/=10;
            }
            if(rev==add_num) break;
            num=add_num;
        }
        cout<<count<<" "<<add_num<<endl;
    }
    return 0;
}
