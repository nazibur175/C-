#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
vector<int> parent, sizee; 
set<int>v[200005];
set<int>quer[200005];
void makeSet(int n) {
    parent.resize(n + 1);
    sizee.resize(n + 1);
    for (int i = 0; i <= n; i++) {
        parent[i] = i;
        sizee[i] = 1;
        v[i].insert(i);
    }
}

int findUPar(int node) {
    if (node == parent[node]) 
        return node; 
    return parent[node] = findUPar(parent[node]);
}

map<pair<int,int>,int>ans;
void unionBySize(int uu, int vv,int time) {
    int ulp_u = findUPar(uu); 
    int ulp_v = findUPar(vv); 
    if (ulp_u == ulp_v) return; 
    if(sizee[ulp_u] < sizee[ulp_v]) 
    swap(ulp_u, ulp_v);
    for(auto it:v[ulp_v]){
        vector<int> temp;
        for(auto q:quer[it]){
            if(v[ulp_u].find(q) != v[ulp_u].end()){
                ans[{it,q}] = time;
                ans[{q,it}] = time;
                temp.push_back(q);
            }
        }
        for(auto q:temp){
            quer[it].erase(q);
            quer[q].erase(it);
        }
    }
    for(auto it:v[ulp_v]){
        v[ulp_u].insert(it);
    }
    //v[ulp_v].clear();
    parent[ulp_v] = ulp_u;
    sizee[ulp_u] += sizee[ulp_v];
}


void solve(){
    int n,m,q;
    cin>>n>>m>>q;
    makeSet(n);
    vector<pair<int,int>> edges(m);
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        edges[i] = {u,v};
    }
    vector<pair<int,int>> queries(q);
    for(int i=0;i<q;i++){
        int u,v;
        cin>>u>>v;
        queries[i] = {u,v};
        quer[u].insert(v);
        quer[v].insert(u);
    }
    for(int i=0;i<m;i++){
        int u = edges[i].first;
        int v = edges[i].second;
        unionBySize(u,v,i+1);
    }
    for(int i=0;i<q;i++){
        int u = queries[i].first;
        int v = queries[i].second;
        if(findUPar(u) == findUPar(v)){
            cout<<ans[{u,v}]<<"\n";
        }else{
            cout<<-1<<"\n";
        }
    }
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}

