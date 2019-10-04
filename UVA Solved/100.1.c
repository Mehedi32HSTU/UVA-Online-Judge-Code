#include<stdio.h>
int main()
{
    int i,j,x,y,n;
    while(scanf("%d%d",&i,&j)==2){
            x=0;y=0;
        ///printf("%d %d ",i,j);
        for(n=i;n<=j;n++){
        start :
            if(n!=1){
            if(n%2!=0) n=3*n+1;
            else n=n/2;
            x++;
            }
            goto start;
            ///printf("%d\n",x+1);
        }
           printf("%d\n",x+1);
    }
    return 0;
}
