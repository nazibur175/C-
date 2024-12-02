#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N = 3e5 + 10;
set<int>adj[26];
bool vis[26];
vector<int>topsort;
bool cycle = false;
bool visited[26];
void dfs(int u){
    vis[u] = true;
    visited[u] = true;
    for(auto v: adj[u]){
        if(!vis[v]){
            dfs(v);
        }
        else if(visited[v]){
            cycle = true;
        }
    }
    visited[u] = false;
    topsort.push_back(u);
}
void solve()
{
    int n;
    cin >> n;
    vector<string>ar(n);
    for(int i = 0; i < n; i++){
        cin >> ar[i];
    }
    for(int i = 0; i < ar.size()-1; i++){
            int j = i + 1;
            bool flag = false;
            for(int k = 0; k < min(ar[i].size(), ar[j].size()); k++){
                if(ar[i][k] != ar[j][k]){
                    adj[ar[i][k] - 'a'].insert(ar[j][k] - 'a');
                    flag = true;
                    break;
                }
            }
            if(!flag && ar[i].size() > ar[j].size()){
                cout << "Impossible" << endl;
                return ;
            }
    }

    for(int i = 0; i < 26; i++){
        if(!vis[i]){
            dfs(i);
        }
    } 
    reverse(topsort.begin(), topsort.end());
    if(cycle){
        cout << "Impossible" << endl;
        return ;
    }
    for(auto x: topsort) 
        cout << (char)(x + 'a');
    cout << endl;
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}