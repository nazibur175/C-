#include<stdio.h>
int a[1000000];
int main(){
    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        int x;
        scanf("%d",&x);
        a[x]=a[x]+1;
    }
    int ans=0; 
    for(int i=0;i<100000;i++)
    {
        if(a[i]!=0)
            ans++;
    }
    printf("%d\n",ans);

    return 0;
}