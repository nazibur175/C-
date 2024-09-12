#include<stdio.h>
#include<string.h>
int main(){

    char ch[100];
    gets(ch);
    int len = strlen(ch);
    for(int i=0;i<len;i++){
        if(ch[i]=='h') break;
        printf("%c",ch[i]);
    }
    return 0;
}