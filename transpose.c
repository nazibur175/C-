#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n][m];
    int b[n][m];
    int sum[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&b[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            sum[i][j]=a[i][j]+b[i][j];
        }   
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    




    return 0;
}