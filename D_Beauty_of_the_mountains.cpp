#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
    int n,m,k; 
        cin>>n>>m>>k;
    int highet[n+5][m+5];
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin>>highet[i][j];
        }
    }
    char state[n+5][m+5];
    int a=0, b=0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin>>state[i][j];
            if(state[i][j]=='1') 
                a+=highet[i][j];
            else 
                b+=highet[i][j];
        }
    }
    int D = -(a-b);
    if(D==0){
        cout<<"YES"<<endl;
        continue;
    }
    int pre[n+5][m+5];
    memset(pre, 0, sizeof(pre));

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            int temp = (state[i][j]=='1') ? 1 : 0;
            pre[i][j] = pre[i-1][j] + pre[i][j-1] - pre[i-1][j-1] + temp;
        }   
    }

    int g = 0;
    for(int i=1; i+k-1<=n; i++){
        for(int j=1; j+k-1<=m; j++){
            int one = pre[i+k-1][j+k-1] - pre[i-1][j+k-1] - pre[i+k-1][j-1] + pre[i-1][j-1];
            int zero = k*k - one;
            int d=one-zero;
            if(d==0) 
                continue;
            if(g==0) 
                g = d;
            else 
                g = __gcd(g, d);
        }
    }
    if(g && D%g==0) 
        cout<<"YES"<<endl;
    else 
        cout<<"NO"<<endl;
}
    }


int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}