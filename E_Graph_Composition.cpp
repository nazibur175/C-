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
    if(sizee[ulp_u] < sizee[ulp_v]) 
        swap(ulp_u, ulp_v);
    parent[ulp_v] = ulp_u;
    sizee[ulp_u] += sizee[ulp_v];
    
}

vector<int> parent2, sizee2; 
void makeSet2(int n) {
    parent2.resize(n + 1);
    sizee2.resize(n + 1);
    for (int i = 0; i <= n; i++) {
        parent2[i] = i;
        sizee2[i] = 1;
    }
}

int findUPar2(int node) {
    if (node == parent2[node]) 
        return node; 
    return parent2[node] = findUPar2(parent2[node]);
}

void unionBySize2(int u, int v) {
    int ulp_u = findUPar2(u); 
    int ulp_v = findUPar2(v); 
    if (ulp_u == ulp_v) return; 
    if(sizee2[ulp_u] < sizee2[ulp_v]) 
        swap(ulp_u, ulp_v);
    parent2[ulp_v] = ulp_u;
    sizee2[ulp_u] += sizee2[ulp_v];
    
}


void solve(){
    test{
        parent2.clear();
        sizee2.clear();
        parent.clear();
        sizee.clear();
        int n,m,mm;
        cin>>n>>m>>mm;
        makeSet(n);
        makeSet2(n);
        vector<pair<int,int>>temp;
        for(int i=0;i<m;i++){
            int u,v;
            cin>>u>>v;
            temp.push_back({u,v});
        }
        vector<pair<int,int>>temp2;
        for(int i=0;i<mm;i++){
            int u,v;
            cin>>u>>v;
            temp2.push_back({u,v});
            unionBySize2(u,v);
        }
        int ans=0;
        for(int i=0;i<m;i++){
            int u=temp[i].first;
            int v=temp[i].second;
            if(findUPar2(u)==findUPar2(v)){
                unionBySize(u,v);
            }
            else{
                ans++;
            }
        }

        set<int>s;
        set<int>ss;
        for(int i=1;i<=n;i++){
            s.insert(findUPar(i));
            ss.insert(findUPar2(i));
        }
        ans+= s.size()-ss.size();
        cout<<ans<<endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}

