#include <bits/stdc++.h>
using namespace std;

#define int long long
#define mod 1000000007
#define test int t; cin >> t; while (t--)

void dfs(const vector<vector<int>>& adj, int node, int parent, int depth, int& maxDepth, int& furthestNode) {
    if (depth > maxDepth) {
        maxDepth = depth;
        furthestNode = node;
    }
    for (int neighbor : adj[node]) {
        if (neighbor != parent) {
            dfs(adj, neighbor, node, depth + 1, maxDepth, furthestNode);
        }
    }
}

bool findPath(const vector<vector<int>>& adj, int current, int target, vector<int>& path, vector<bool>& visited) {
    path.push_back(current);
    if (current == target) return true;

    visited[current] = true;
    for (int neighbor : adj[current]) {
        if (!visited[neighbor] && findPath(adj, neighbor, target, path, visited)) {
            return true;
        }
    }

    path.pop_back();
    return false;
}

void solve() {
    test {
        int n;
        cin >> n;
        int a, b;
        cin >> a >> b;
        vector<vector<int>> adj(n + 1);
        
        for (int i = 0; i < n - 1; i++) {
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }

        // Finding the maximum height of the tree rooted at a
        int maxDepth = 0;
        int furthestNode = a;
        dfs(adj, a, -1, 0, maxDepth, furthestNode);

        //cout << "Maximum height of the tree rooted at " << a << " is " << maxDepth << endl;

        // Finding the path from a to b
        vector<int> path;
        vector<bool> visited(n + 1, false);
        int f=0;
        if (findPath(adj, a, b, path, visited)) {
            //cout << "Path from " << a << " to " << b << ": ";
            // in the path or not
            for (int node : path) {
                //cout << node << " ";
                if(node==b)f=1;
            }
            //cout << endl;
            //cout << "Distance from " << a << " to " << b << ": " << dis << endl;
        } 
        int dis= path.size()-1;
        
        int ans=0;
        for(int i=1;i<=n;i++) ans+=adj[i].size();
        if(f){
            ans= ans - maxDepth + dis;
            if(adj[a].size()==1){
                int c=0;
                int root=a;
                
                while (adj[root].size()==1)
                {
                    c++;
                    root=adj[root][0];
                }
                ans-=c;
            }
        }
        else ans= ans - maxDepth + ((dis+1)/2) ;
        cout<<ans<<endl;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
