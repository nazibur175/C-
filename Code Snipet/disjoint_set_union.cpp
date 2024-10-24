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
void solve(){

    int n = 7; 
    makeSet(n);
    
    unionBySize(1, 2);
    unionBySize(2, 3);
    unionBySize(4, 5);
    unionBySize(6, 7);
    unionBySize(5, 6);
    
    // Check if 3 and 7 are in the same set
    if (findUPar(3) == findUPar(7)) {
        cout << "Same\n";
    } else {
        cout << "Not same\n";
    }
    
    unionBySize(3, 7);
    
    if (findUPar(3) == findUPar(7)) {
        cout << "Same\n";
    } else {
        cout << "Not same\n";
    }
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}

