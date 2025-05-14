#include<stdio.h>
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    // gcd(x,y);
    while(y!=0){
        int temp=x%y;
        x=y;
        y=temp;
    }
    printf("%d",x);

    return 0;
}