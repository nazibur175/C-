#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    scanf("%s",s);
    int n = strlen(s);
    // 5    n/2  = 5/2 = 2
    // 0-4  i=0    n-i-1=5-0-1=4
    // 1-3  i=1    n-i-1=5-1-1=3

    // 2-2  i=2    n-i-1=5-2-1=2

    // 6    n/2  = 6/2 = 3
    // 0-5  i=0   n-i-1=6-0-1=5
    // 1-4  i=1   n-i-1=6-1-1=4
    // 2-3  i=2   n-i-1=6-2-1=3

    int f=1;
    for(int i=0;i<n/2;i++){
        if(s[i]!=s[n-i-1]){
            f=0;
        }
    }
    if(f==1) printf("YES\n");
    else printf("NO\n");

}
