#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
vector<int> parent, sizee; 

void makeSet(int n) {
    parent.resize(n + 1);
    sizee.resize(n + 1);
    for (int i = 0; i <= n; i++) {
        parent[i] = i;
        sizee[i] = 1;
    }
}

int findUPar(int node) {
    if (node == parent[node]) 
        return node; 
    return parent[node] = findUPar(parent[node]);
}

void unionBySize(int u, int v) {
    int ulp_u = findUPar(u); 
    int ulp_v = findUPar(v); 
    if (ulp_u == ulp_v) return; 
    if (sizee[ulp_u] < sizee[ulp_v]) {
        parent[ulp_u] = ulp_v;
        sizee[ulp_v] += sizee[ulp_u];
    } else {
        parent[ulp_v] = ulp_u;
        sizee[ulp_u] += sizee[ulp_v];
    }
}
void solve(){
    test{
        int n,q;
        cin>>n>>q;
        parent.clear();
        sizee.clear();
        int dp[n+2][11];
        memset(dp,0,sizeof(dp));
        while (q--)
        {
            int a,d,k;
            cin>>a>>d>>k;
            dp[a][d]=max(dp[a][d],k);
        }

        makeSet(n);

        for(int i=1;i<=n;i++){
            for(int j=1;j<=10;j++){
                if(dp[i][j]){
                    unionBySize(i,i+j);
                    dp[i+j][j]=max(dp[i+j][j],dp[i][j]-1);
                }
            }
        }

        int ans=0;
        for(int i=1;i<=n;i++){
            if(findUPar(i)==i) ans++;
        }
        cout<<ans<<endl;
        
    }
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}

