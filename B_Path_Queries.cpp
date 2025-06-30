#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=2e5+9;
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
int temp = 0;
map<int,int>mp;
void unionBySize(int u, int v, int w) {
    int ulp_u = findUPar(u); 
    int ulp_v = findUPar(v); 
    // if (ulp_u == ulp_v) return; 
    if(sizee[ulp_u] < sizee[ulp_v]) 
        swap(ulp_u, ulp_v);
    temp-= (sizee[ulp_u] * (sizee[ulp_u]-1))/2;
    temp-= (sizee[ulp_v] * (sizee[ulp_v]-1))/2;
    parent[ulp_v] = ulp_u;
    sizee[ulp_u] += sizee[ulp_v];
    temp+= (sizee[ulp_u] * (sizee[ulp_u]-1))/2;
    mp[w] = temp;
}
void solve(){
    int n,q;
    cin>>n>>q;
    vector<tuple<int,int,int>>edges;
    for(int i=0;i<n-1;i++){
        int u,v,w;
        cin>>u>>v>>w;
        edges.push_back({w,u,v});
    }
    sort(edges.begin(),edges.end());
    makeSet(n);
    for(int i=0;i<n-1;i++){
        int u = get<1>(edges[i]);
        int v = get<2>(edges[i]);
        int w = get<0>(edges[i]);
        unionBySize(u,v,w);
    }
    deque<pair<int,int>> queries;
    for(int i=0;i<q;i++){
        int x;
        cin>>x;
        queries.push_back({x,i});
    }
    sort(queries.begin(),queries.end());
    map<int,int>ans;
    int j=0;
    int temp=0;
    for(auto it: queries){
        ans[it.second] = temp;
        for(;j<=it.first;j++){
            temp=max(temp, mp[j]);
            ans[it.second]= max(ans[it.second], temp);
        }
    }
    for(int i=0;i<q;i++){
        cout<<ans[i];
        if(i < q-1) cout << " ";
    }
    cout << "\n";
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}