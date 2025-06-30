#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
vector<int> parent, sizee; 
int timee[200005];

void makeSet(int n) {
    parent.resize(n + 1);
    sizee.resize(n + 1);
    for (int i = 0; i <= n; i++) {
        parent[i] = i;
        sizee[i] = 1;
        timee[i]=mod;
    }
}

int findUPar(int node) {
    if (node == parent[node]) 
        return node; 
    return findUPar(parent[node]);
}
void unionBySize(int u, int v,int t) {
    int ulp_u = findUPar(u); 
    int ulp_v = findUPar(v); 
    if (ulp_u == ulp_v) return; 
    if(sizee[ulp_u] < sizee[ulp_v]) 
        swap(ulp_u, ulp_v);
    parent[ulp_v] = ulp_u;
    sizee[ulp_u] += sizee[ulp_v];
    timee[ulp_v]=t;
}
int cal(int u,int v){
    int t=0;
    while(u!=v){
        if(timee[u]<timee[v]){
            t=timee[u];
            if(u==parent[u]) return -1;
            u=parent[u];
        }
        else {
            t=timee[v];
            if(v==parent[v]) return -1;
            v=parent[v];
        }
       
    }
    return t;
}
void solve(){
    int n,m,q;
    cin>>n>>m>>q;
    makeSet(n);
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        unionBySize(u, v, i+1);
    }
    // for(int i=1;i<=n;i++){
    //     cout<<timee[i]<<" ";
    // }
    // cout<<"\n";
    while(q--){
        int u,v;
        cin>>u>>v;
        cout<<cal(u, v)<<"\n";
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}

