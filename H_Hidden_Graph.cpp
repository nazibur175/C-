#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N = 1e6 + 6;
int minPrime[N + 1];
int vis[N];
vector<int>edge[N];
int l,r;
void min_prime_divisor() {
    for (int i = 2; i * i <= N; ++i) {
        if (minPrime[i] == 0) { 
            for (int j = i * i; j <= N; j += i) {
                if (minPrime[j] == 0) {
                    minPrime[j] = i;
                }
            }
        }
    }
    for (int i = 2; i <= N; ++i) {
        if (minPrime[i] == 0) {
            minPrime[i] = i;
        }
    }
}

void factorize(set<int>&s, int n) {
    while (n != 1) {
        s.insert(minPrime[n]);
        n /= minPrime[n];
    }
}

int dfs(int node) {
    int cnt = 0;
    if(node>=l && node<=r) cnt++;
    vis[node] = 1;
    for (auto it : edge[node]) {
        if (vis[it] == 0) {
            int temp= dfs(it);
            cnt += temp;
        }
    }
    return cnt;
}
//set<int>primes[N];
void solve() {
    min_prime_divisor();  
    test {
        cin >> l >> r;
        memset(vis, 0, sizeof(vis));
        for(int i=0;i<N;i++){
            edge[i].clear();
        }
       
        for(int i=l;i<=r;i++){
            set<int>prime;
            factorize(prime,i);
            for(auto it:prime){
                edge[i].push_back(it);
                edge[it].push_back(i);
            }
        }
        vector<int>ans;
        for(int i=l;i<=r;i++){
            if(!vis[i]){
                int size = dfs(i);
                ans.push_back(size);
            }
        }

        cout << ans.size() << endl;
        sort(ans.begin(), ans.end());
        for (auto it : ans) {
            cout << it << endl;
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
